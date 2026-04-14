@class NSString;

@interface CSStingrayRecordClientMetadataStableMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStableEscrow;
@property (retain, nonatomic) NSString *stableEscrow;

+ (id)parseFromStableMetadataPlist:(id)a0 error:(id *)a1;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)convertToPList;

@end
