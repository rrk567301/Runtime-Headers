@interface TSMMessageHandler : NSObject {
    struct __CFMessagePort { } *fLocalPort;
    struct __CFRunLoopSource { } *fRunLoopSourceForPort;
}

+ (char)send:(int)a0 contents:(id)a1 target:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *)a2 withReply:(id)a3;
+ (char)_sendMessageOnPort:(struct __CFString { } *)a0 messageID:(int)a1 dictionary:(id)a2;
+ (id)localMessagePortWithReceiver:(id)a0;
+ (char)messageSwitcher:(int)a0 dictionary:(id)a1;
+ (char)messageTIMCore:(int)a0 dictionary:(id)a1 withReply:(id)a2;
+ (void)messageTouchBarInputMenu:(int)a0 dictionary:(id)a1;
+ (char)nowSending;
+ (char)send:(int)a0 contents:(id)a1 target:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *)a2;

- (void)dealloc;
- (void)freeLocalPort;
- (id)initLocalMessagePortWithReceiver:(id)a0;

@end
