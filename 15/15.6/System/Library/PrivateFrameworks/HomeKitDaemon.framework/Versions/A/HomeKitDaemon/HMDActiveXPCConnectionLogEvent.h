@class NSString;

@interface HMDActiveXPCConnectionLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSString *name;
@property (readonly, getter=isActivated) char activated;
@property (readonly) char added;

+ (id)initWithNewXPCConnectionAdded:(id)a0;
+ (id)initWithXPCConnectionRemoved:(id)a0;

- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0 added:(char)a1;

@end
