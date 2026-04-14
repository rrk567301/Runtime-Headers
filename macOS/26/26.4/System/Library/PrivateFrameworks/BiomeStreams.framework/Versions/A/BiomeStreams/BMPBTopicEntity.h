@class NSString, NSMutableArray;

@interface BMPBTopicEntity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTopicId;
@property (retain, nonatomic) NSString *topicId;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *attributes;

+ (Class)attributesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearAttributes;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (unsigned long long)attributesCount;
- (void)writeTo:(id)a0;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;

@end
