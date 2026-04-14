@class NSData;

@interface PCSDBRRecordChangeBlob : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOldMetadata;
@property (retain, nonatomic) NSData *oldMetadata;
@property (readonly, nonatomic) BOOL hasCurrentMetadata;
@property (retain, nonatomic) NSData *currentMetadata;
@property (readonly, nonatomic) BOOL hasHsmBlob;
@property (retain, nonatomic) NSData *hsmBlob;

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

@end
