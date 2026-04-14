@interface TSMMessageHandler : NSObject {
    struct __CFMessagePort { } *fLocalPort;
    struct __CFRunLoopSource { } *fRunLoopSourceForPort;
}

+ (BOOL)send:(int)a0 contents:(id)a1 target:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *)a2 withReply:(id)a3;
+ (BOOL)messageTIMCore:(int)a0 dictionary:(id)a1 withReply:(id)a2;
+ (BOOL)send:(int)a0 contents:(id)a1 target:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *)a2;
+ (BOOL)_sendMessageOnPort:(struct __CFString { } *)a0 messageID:(int)a1 dictionary:(id)a2;
+ (id)localMessagePortWithReceiver:(id)a0;
+ (BOOL)nowSending;
+ (BOOL)messageSwitcher:(int)a0 dictionary:(id)a1;
+ (void)messageTouchBarInputMenu:(int)a0 dictionary:(id)a1;

- (void)dealloc;
- (id)initLocalMessagePortWithReceiver:(id)a0;
- (void)freeLocalPort;

@end
