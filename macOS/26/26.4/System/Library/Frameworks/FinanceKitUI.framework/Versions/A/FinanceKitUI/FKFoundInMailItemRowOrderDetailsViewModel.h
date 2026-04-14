@class NSString;

@interface FKFoundInMailItemRowOrderDetailsViewModel : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *trackedOrderIdentifier;
@property (readonly, copy, nonatomic) NSString *orderTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *orderIdentifier;
@property (readonly, nonatomic) unsigned long long emailType;
@property (readonly, copy, nonatomic) NSString *merchantDisplayName;
@property (readonly, copy, nonatomic) NSString *orderNumber;
@property (readonly, nonatomic) unsigned long long shippingStatus;
@property (readonly, copy, nonatomic) NSString *shippingDetailsTrackingNumber;
@property (readonly, copy, nonatomic) NSString *shippingDetailsCarrierName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithEmailType:(unsigned long long)a0 merchantDisplayName:(id)a1 orderNumber:(id)a2 shippingStatus:(unsigned long long)a3 shippingDetailsTrackingNumber:(id)a4 shippingDetailsCarrierName:(id)a5;

@end
