@class NSData, NSMutableArray, HDCodableSource;

@interface HDCodableSourceAuthorization : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (retain, nonatomic) NSMutableArray *authorizations;
@property (readonly, nonatomic) char hasBackupUUID;
@property (retain, nonatomic) NSData *backupUUID;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) HDCodableSource *source;

+ (Class)authorizationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAuthorizations:(id)a0;
- (id)authorizationsAtIndex:(unsigned long long)a0;
- (unsigned long long)authorizationsCount;
- (void)clearAuthorizations;
- (id)decodedBackupUUID;
- (id)decodedSourceUUID;

@end
