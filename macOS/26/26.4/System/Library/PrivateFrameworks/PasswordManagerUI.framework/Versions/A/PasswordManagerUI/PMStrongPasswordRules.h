@class NSString, NSDictionary;

@interface PMStrongPasswordRules : NSObject {
    void /* function */ passwordFieldPasswordRules;
    void /* function */ confirmPasswordFieldPasswordRules;
    void /* function */ passwordRulesFromQuirks;
    void /* function */ safariFormatPasswordRules;
}

@property (nonatomic, readonly) NSString *passwordFieldPasswordRules;
@property (nonatomic, readonly) NSString *confirmPasswordFieldPasswordRules;
@property (nonatomic, readonly) NSString *passwordRulesFromQuirks;
@property (nonatomic, readonly) NSDictionary *safariFormatPasswordRules;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPasswordFieldPasswordRules:(id)a0 confirmPasswordFieldPasswordRules:(id)a1 passwordRulesFromQuirks:(id)a2 safariFormatPasswordRules:(id)a3;

@end
