@class NSString;

@interface IATextInputActionsSessionActionInformation : NSObject

@property (copy, nonatomic) NSString *sessionActionsString;
@property (nonatomic) char sessionHasOnlyPrimaryInput;
@property (nonatomic) char sessionHasDictation;

- (void).cxx_destruct;

@end
