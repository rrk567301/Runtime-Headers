@class NSString;

@interface PLXPCMessageLogger : NSObject <NSXPCConnectionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)enabled;

- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(char)a2;

@end
