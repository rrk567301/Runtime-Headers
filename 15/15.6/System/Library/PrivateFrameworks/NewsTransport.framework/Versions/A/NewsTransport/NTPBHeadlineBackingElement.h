@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasArticleRecordData;
@property (retain, nonatomic) NSData *articleRecordData;
@property (readonly, nonatomic) char hasSourceChannelRecordData;
@property (retain, nonatomic) NSData *sourceChannelRecordData;
@property (readonly, nonatomic) char hasParentIssueRecordData;
@property (retain, nonatomic) NSData *parentIssueRecordData;

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
