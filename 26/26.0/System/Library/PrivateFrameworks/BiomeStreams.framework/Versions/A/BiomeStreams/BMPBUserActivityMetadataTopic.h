@class NSString;

@interface BMPBUserActivityMetadataTopic : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTopicIdentifier;
@property (retain, nonatomic) NSString *topicIdentifier;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;

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

@end
