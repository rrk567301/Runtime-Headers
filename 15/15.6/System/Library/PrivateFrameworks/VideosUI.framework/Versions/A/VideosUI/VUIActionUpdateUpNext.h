@class NSString;

@interface VUIActionUpdateUpNext : VUIAction

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) char confirmationShouldWaitCompletion;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (char)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
