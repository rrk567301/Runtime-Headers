@class NSString, NSArray, NSDate, NSNumber, PKPaymentPassAction;
@protocol NPKDateRange;

@interface NPKCommutePlanField : NSObject <NPKCommutePlanField> {
    NSDate *_pendingUpdateExpireDate;
}

@property (readonly, nonatomic) NSString *detailLabel;
@property (readonly, nonatomic) id<NPKDateRange> usageDateRange;
@property (readonly, nonatomic) BOOL isCountBasedCommutePlan;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) NSArray *details;
@property (readonly, nonatomic) NSDate *availableFrom;
@property (readonly, nonatomic) NSDate *availableUntil;
@property (readonly, nonatomic) BOOL isDeviceBound;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *formattedValue;
@property (readonly, nonatomic) NSNumber *rawCountValue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PKPaymentPassAction *action;
@property (readonly, nonatomic) BOOL hasPendingUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 detailLabel:(id)a1 formattedValue:(id)a2 rawCountValue:(id)a3 usageDateRange:(id)a4 identifier:(id)a5 details:(id)a6 action:(id)a7 isDeviceBound:(BOOL)a8 pendingUpdateExpireDate:(id)a9;

@end
