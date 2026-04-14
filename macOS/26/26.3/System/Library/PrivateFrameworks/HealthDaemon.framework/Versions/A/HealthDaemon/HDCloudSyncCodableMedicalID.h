@class HDCodableMedicalIDData, NSMutableArray;

@interface HDCloudSyncCodableMedicalID : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMedicalIDData;
@property (retain, nonatomic) HDCodableMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSMutableArray *medicalIDLogs;

+ (Class)medicalIDLogsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addMedicalIDLogs:(id)a0;
- (void)clearMedicalIDLogs;
- (id)medicalIDLogsAtIndex:(unsigned long long)a0;
- (unsigned long long)medicalIDLogsCount;

@end
