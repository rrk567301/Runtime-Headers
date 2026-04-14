@class NSString;

@interface CSStingrayRecordClientMetadataStableMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStableEscrow;
@property (retain, nonatomic) NSString *stableEscrow;

+ (id)parseFromStableMetadataPlist:(id)a0 error:(id *)a1;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (id)convertToPList;

@end
