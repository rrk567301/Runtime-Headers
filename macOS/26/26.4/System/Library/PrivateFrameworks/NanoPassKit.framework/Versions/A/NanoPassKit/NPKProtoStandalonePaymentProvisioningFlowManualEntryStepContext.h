@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext : PBCodable <NSCopying> {
    struct { unsigned char cameraFirstProvisioningEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasCameraFirstProvisioningEnabled;
@property (nonatomic) BOOL cameraFirstProvisioningEnabled;
@property (retain, nonatomic) NSMutableArray *setupFields;

+ (Class)setupFieldsType;

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
- (void)addSetupFields:(id)a0;
- (void)clearSetupFields;
- (id)setupFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)setupFieldsCount;

@end
