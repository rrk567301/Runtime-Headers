@interface AWDCoreRoutinePersistenceMirroringOperations : PBCodable <NSCopying> {
    struct { unsigned char timeIntervalSinceLastOperation : 1; unsigned char timestamp : 1; unsigned char deviceClass : 1; unsigned char errorCount : 1; unsigned char operationType : 1; unsigned char qualityOfService : 1; unsigned char recordsChanged : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDeviceClass;
@property (nonatomic) int deviceClass;
@property (nonatomic) char hasOperationType;
@property (nonatomic) int operationType;
@property (nonatomic) char hasRecordsChanged;
@property (nonatomic) int recordsChanged;
@property (nonatomic) char hasErrorCount;
@property (nonatomic) int errorCount;
@property (nonatomic) char hasTimeIntervalSinceLastOperation;
@property (nonatomic) long long timeIntervalSinceLastOperation;
@property (nonatomic) char hasQualityOfService;
@property (nonatomic) int qualityOfService;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
