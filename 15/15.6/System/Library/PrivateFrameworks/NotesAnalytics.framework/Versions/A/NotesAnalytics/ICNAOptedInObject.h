@interface ICNAOptedInObject : NSObject

@property (class, readonly) char isOptedInForAnalytics;

+ (void)disableAnalytics;

- (id)init;

@end
