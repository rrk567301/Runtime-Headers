@class NSString;

@interface NTPBTopStoriesStyleConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) char hasForegroundColor;
@property (retain, nonatomic) NSString *foregroundColor;
@property (readonly, nonatomic) char hasBackgroundColor;
@property (retain, nonatomic) NSString *backgroundColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
