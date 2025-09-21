@interface CDPWebAccessStateCache : NSObject

@property unsigned long long webAccessStatus;
@property char isValid;

+ (id)sharedInstance;

- (id)init;

@end
