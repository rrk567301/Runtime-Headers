@class CLPPrivacySanitization, CLPConsolidation;

@interface CLPLocationProcessingPipelineMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPrivacySanitization;
@property (retain, nonatomic) CLPPrivacySanitization *privacySanitization;
@property (readonly, nonatomic) BOOL hasConsolidation;
@property (retain, nonatomic) CLPConsolidation *consolidation;

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

@end
