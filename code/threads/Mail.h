// 6)Mail::Mail 
// 功能描述：Mail类构造函数。 
// 入口参数：int ――信箱号。 
// 返回值：无 
// 函数流程： 初始化。 
// box_id=boxid; 
// sender_id=-1; 
// receiver_id=-1; 
// size=0; 
// state=EMPTYED; 

// 7)Mail::SaveMail 
// 功能描述：信箱中有消息时，记录信箱状态。 
// 入口参数：int ――发送者线程号。 
// int ――接收者线程号。 
// int ――消息大小。 
// 返回值：无 
// 函数流程： 
// sender_id=sender; 
// receiver_id=receiver; 
// size=len; 
// state=FULLED; 

// 8)Mail::ExportMail 
// 2，功能描述：。信箱中的消息被传送了，记录记录信箱状态。
// 入口参数：无。 
// 返回值：无 
// 函数流程： 
// sender_id=-1; 
// receiver_id=-1; 
// size=0; 
// state=EMPTYED; 



