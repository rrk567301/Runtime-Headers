@class NSMutableArray, VCPProtoTimeRange;

@interface VCPProtoSummarizedEmbeddingResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _embeddingIDs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _representativeMappings;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (readonly, nonatomic) unsigned long long embeddingIDsCount;
@property (readonly, nonatomic) unsigned int *embeddingIDs;
@property (readonly, nonatomic) unsigned long long representativeMappingsCount;
@property (readonly, nonatomic) unsigned int *representativeMappings;
@property (retain, nonatomic) NSMutableArray *thumbnailIDs;

+ (Class)thumbnailIDType;
+ (id)resultFromLegacyDictionary:(id)a0;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addEmbeddingID:(unsigned int)a0;
- (void)addThumbnailID:(id)a0;
- (void)addRepresentativeMapping:(unsigned int)a0;
- (void)clearEmbeddingIDs;
- (void)clearRepresentativeMappings;
- (void)clearThumbnailIDs;
- (unsigned int)embeddingIDAtIndex:(unsigned long long)a0;
- (id)exportToLegacyDictionary;
- (unsigned int)representativeMappingAtIndex:(unsigned long long)a0;
- (void)setEmbeddingIDs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setRepresentativeMappings:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)thumbnailIDAtIndex:(unsigned long long)a0;
- (unsigned long long)thumbnailIDsCount;

@end
