@class NSString;

@interface SFAirDropAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *transferIdentifier;
@property (nonatomic) unsigned long long minRequiredTransferState;
@property (nonatomic) unsigned long long maxTransferState;
@property (nonatomic) BOOL requiresUnlockedUI;
@property (nonatomic) BOOL shouldUpdateUserResponse;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *singleItemLocalizedTitle;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;

+ (id)testActionWithTitle:(id)a0 actionHandler:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransferIdentifier:(id)a0 actionIdentifier:(id)a1 title:(id)a2 singleItemTitle:(id)a3 type:(long long)a4;
- (id)initWithTransferIdentifier:(id)a0 actionIdentifier:(id)a1 title:(id)a2 singleItemTitle:(id)a3 type:(long long)a4 handler:(id /* block */)a5;
- (void)triggerAction;

@end
