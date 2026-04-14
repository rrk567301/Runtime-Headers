@class HDCodableMedicalIDData, NSMutableArray;

@interface HDCloudSyncCodableMedicalID : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMedicalIDData;
@property (retain, nonatomic) HDCodableMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSMutableArray *medicalIDLogs;

+ (Class)medicalIDLogsType;

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
- (void)addMedicalIDLogs:(id)a0;
- (void)clearMedicalIDLogs;
- (id)medicalIDLogsAtIndex:(unsigned long long)a0;
- (unsigned long long)medicalIDLogsCount;

@end
