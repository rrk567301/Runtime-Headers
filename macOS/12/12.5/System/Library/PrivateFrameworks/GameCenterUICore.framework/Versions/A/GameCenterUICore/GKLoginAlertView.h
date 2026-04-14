@class NSString;

@interface GKLoginAlertView : _GKAlert {
    unsigned long long _passwordFieldIndex;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;

- (void).cxx_destruct;
- (id)password;
- (void)setPassword:(id)a0;
- (id)initWithDelegate:(id)a0 uneditableUsername:(id)a1;

@end
