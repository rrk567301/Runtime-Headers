@class __IMDBackwardCompatibilityMessageIdentifier;

@interface IMDBackwardCompatibilityMessageIdentifier : NSObject

@property (class, readonly, nonatomic) IMDBackwardCompatibilityMessageIdentifier *sharedIdentifier;

@property (retain, nonatomic) __IMDBackwardCompatibilityMessageIdentifier *swiftImplementation;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isIgnorableBackwardCompatibilityMessage:(id)a0 inChat:(id)a1;

@end
