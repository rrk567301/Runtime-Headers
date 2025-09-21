@class NSString;

@interface TCSmartActionFollowUpCash : NSObject <TCSmartActionFollowUpProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *currencyType;
@property (readonly, copy, nonatomic) NSString *currencyValue;
@property (readonly, copy, nonatomic) NSString *actionType;
@property (readonly, copy, nonatomic) NSString *actionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCurrencyType:(id)a0 currencyValue:(id)a1;

@end
