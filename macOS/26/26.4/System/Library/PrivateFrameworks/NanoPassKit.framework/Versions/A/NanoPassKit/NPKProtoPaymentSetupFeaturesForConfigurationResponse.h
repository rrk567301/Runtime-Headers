@class NSMutableArray;

@interface NPKProtoPaymentSetupFeaturesForConfigurationResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *paymentSetupFeatureDatas;

+ (Class)paymentSetupFeatureDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)paymentSetupFeatureDataAtIndex:(unsigned long long)a0;
- (void)addPaymentSetupFeatureData:(id)a0;
- (void)clearPaymentSetupFeatureDatas;
- (unsigned long long)paymentSetupFeatureDatasCount;

@end
