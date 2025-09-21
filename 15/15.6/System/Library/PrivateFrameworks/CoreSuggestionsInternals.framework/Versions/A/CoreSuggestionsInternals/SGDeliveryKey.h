@class NSString;

@interface SGDeliveryKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) unsigned long long provider;
@property (readonly, nonatomic) NSString *trackingNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSupportedEntityType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithProvider:(unsigned long long)a0 trackingNumber:(id)a1;
- (id)initWithSerialized:(id)a0;
- (char)isEqualToDeliveryKey:(id)a0;

@end
