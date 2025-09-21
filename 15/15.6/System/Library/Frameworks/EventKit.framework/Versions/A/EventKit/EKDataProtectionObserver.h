@class NSString;

@interface EKDataProtectionObserver : NSObject

@property (class, readonly, nonatomic) NSString *stateChangedNotificationName;

@property (copy, nonatomic) id /* block */ stateChangedCallback;
@property (readonly, nonatomic) char dataIsAccessible;

- (void).cxx_destruct;

@end
