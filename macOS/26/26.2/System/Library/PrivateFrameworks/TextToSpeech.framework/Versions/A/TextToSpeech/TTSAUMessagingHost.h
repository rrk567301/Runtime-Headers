@class NSDictionary, NSSet;
@protocol AUMessageChannel;

@interface TTSAUMessagingHost : NSObject <TTSAUMessaging>

@property (retain, nonatomic) id<AUMessageChannel> channel;
@property (retain, nonatomic) NSDictionary *methods;
@property (retain, nonatomic) NSSet *allowedClasses;

+ (id)_validSelectorsForProtocol;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithMessageChannel:(id)a0;
- (void)_loadProtocolMethods;

@end
