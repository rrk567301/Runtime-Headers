@class NSString, NSMutableArray;

@interface BMPBTopicEntity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTopicId;
@property (retain, nonatomic) NSString *topicId;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *attributes;

+ (Class)attributesType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)attributesCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearAttributes;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;

@end
