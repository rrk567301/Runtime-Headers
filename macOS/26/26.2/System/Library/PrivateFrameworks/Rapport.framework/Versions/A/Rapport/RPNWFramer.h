@interface RPNWFramer : NSObject

+ (void)writeErrorOnFramer:(id)a0 token:(id)a1 error:(unsigned char)a2;
+ (const char *)controlCodeToString:(int)a0;
+ (void)setupDaemonFramer:(id)a0 token:(id)a1 receiveHandler:(id /* block */)a2 closeHandler:(id /* block */)a3;
+ (void)startConnection:(id)a0 token:(id)a1;
+ (BOOL)writeControlOnFramer:(id)a0 type:(int)a1 error:(unsigned char)a2 token:(id)a3;
+ (BOOL)writeDataOnFramer:(id)a0 data:(id)a1;

@end
