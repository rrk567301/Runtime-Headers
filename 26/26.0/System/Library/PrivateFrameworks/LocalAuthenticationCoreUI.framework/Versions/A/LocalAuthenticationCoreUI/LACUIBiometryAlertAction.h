@class NSString;

@interface LACUIBiometryAlertAction : NSObject

@property (readonly, nonatomic) NSString *axIdentifier;
@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) BOOL shouldDismissAlert;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type;

+ (id)actionWithType:(long long)a0 title:(id)a1 handler:(id /* block */)a2;
+ (id)actionWithType:(long long)a0 title:(id)a1 shouldDismissAlert:(BOOL)a2 handler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 title:(id)a1 shouldDismissAlert:(BOOL)a2 handler:(id /* block */)a3;

@end
