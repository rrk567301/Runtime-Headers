@class NSString;

@interface VSErrorRecoveryOption : NSObject

@property (copy, nonatomic) NSString *localizedAlertButtonTitle;
@property (copy, nonatomic) id /* block */ attemptHandler;
@property (nonatomic, getter=isDestructive) char destructive;

- (void).cxx_destruct;

@end
