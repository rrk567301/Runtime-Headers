@class NSString, NSMutableArray;

@interface NTPBIssueData : PBCodable <NSCopying> {
    struct { unsigned char issueType : 1; unsigned char isBundlePaid : 1; } _has;
}

@property (readonly, nonatomic) char hasIssueId;
@property (retain, nonatomic) NSString *issueId;
@property (nonatomic) char hasIsBundlePaid;
@property (nonatomic) char isBundlePaid;
@property (nonatomic) char hasIssueType;
@property (nonatomic) int issueType;
@property (retain, nonatomic) NSMutableArray *topicIds;

+ (Class)topicIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsIssueType:(id)a0;
- (void)addTopicIds:(id)a0;
- (void)clearTopicIds;
- (id)issueTypeAsString:(int)a0;
- (id)topicIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicIdsCount;

@end
