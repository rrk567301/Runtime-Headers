@class NSString, PKPaymentBalance, NSDate, NSNumber, PKPaymentPassAction;

@interface NPKBalanceField : NSObject <NSSecureCoding, NPKBalanceField> {
    NSDate *_pendingUpdateExpireDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *formattedValue;
@property (readonly, nonatomic) BOOL isPrimaryBalance;
@property (readonly, nonatomic) PKPaymentBalance *balance;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *detailLabel;
@property (readonly, nonatomic) NSNumber *rawCountValue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PKPaymentPassAction *action;
@property (readonly, nonatomic) BOOL hasPendingUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBalance:(id)a0 label:(id)a1 formattedValue:(id)a2 identifier:(id)a3 primaryBalance:(BOOL)a4 action:(id)a5 pendingUpdateExpireDate:(id)a6;

@end
