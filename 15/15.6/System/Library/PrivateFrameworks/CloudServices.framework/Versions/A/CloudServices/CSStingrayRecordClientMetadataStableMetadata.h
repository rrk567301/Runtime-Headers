@class NSString;

@interface CSStingrayRecordClientMetadataStableMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasStableEscrow;
@property (retain, nonatomic) NSString *stableEscrow;

+ (id)parseFromStableMetadataPlist:(id)a0 error:(id *)a1;

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
- (id)convertToPList;

@end
