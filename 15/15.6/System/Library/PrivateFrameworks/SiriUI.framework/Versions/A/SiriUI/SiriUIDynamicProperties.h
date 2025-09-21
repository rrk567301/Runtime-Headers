@interface SiriUIDynamicProperties : NSObject

@property (nonatomic) char typingDynamicallyEnabled;

+ (id)sharedInstance;

- (char)isTypeToSiriActive;

@end
