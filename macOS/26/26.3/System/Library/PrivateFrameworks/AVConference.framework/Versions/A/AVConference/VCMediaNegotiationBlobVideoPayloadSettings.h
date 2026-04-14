@class NSString, NSMutableArray;

@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable <NSCopying>

@property (nonatomic) unsigned int payload;
@property (retain, nonatomic) NSMutableArray *videoRuleCollections;
@property (retain, nonatomic) NSString *featureString;
@property (nonatomic) unsigned int parameterSet;

+ (Class)videoRuleCollectionsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addVideoRuleCollections:(id)a0;
- (void)clearVideoRuleCollections;
- (id)videoRuleCollectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)videoRuleCollectionsCount;

@end
