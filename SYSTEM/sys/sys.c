#include "sys.h"

//********************************************************************************  
//THUMBָ�֧�ֻ������
//�������·���ʵ��ִ�л��ָ��WFI  
//void WFI_SET(void)  
//{  
//    asm("WFI");         
//}  
////�ر������ж� 
//void INTX_DISABLE(void)  
//{         
//    asm("CPSID   I");     
//    asm("BX      LR");    
//}  
////���������ж�
//void INTX_ENABLE(void)  
//{  
//    asm("CPSIE   I");     
//    asm("BX      LR");    
//}  
////����ջ����ַ
////addr:ջ����ַ
//void MSR_MSP(u32 addr)   
//{  
//    asm("MSR MSP, r0"); //set Main Stack value  
//    asm("BX r14");    
//}  


void WFI_SET(void)
{
	__ASM volatile("wfi");		  
}
//�ر������ж�
void INTX_DISABLE(void)
{		  
	__ASM volatile("cpsid i");
}
//���������ж�
void INTX_ENABLE(void)
{
	__ASM volatile("cpsie i");		  
}
//����ջ����ַ
//addr:ջ����ַ
__asm void MSR_MSP(u32 addr) 
{
    MSR MSP, r0 			//set Main Stack value
    BX r14
}
