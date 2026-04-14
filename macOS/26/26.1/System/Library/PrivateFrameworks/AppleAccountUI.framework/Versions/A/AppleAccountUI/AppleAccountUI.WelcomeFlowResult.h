@class NSString, NSDictionary, NSError;

@interface AppleAccountUI.WelcomeFlowResult : NSObject <AAUIWelcomeFlowResultProviding> {
    void /* function */ info;
    void /* function */ error;
}

@property (nonatomic) long long outcome;
@property (nonatomic, copy) NSString *stage;
@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (id)init;

@end
