@class NSString, NSData;

@interface DRSProtoRequestDescription : PBCodable <NSCopying> {
    struct { unsigned char requestTime : 1; } _has;
}

@property (readonly, nonatomic) char hasTeamId;
@property (retain, nonatomic) NSString *teamId;
@property (readonly, nonatomic) char hasIssueCategory;
@property (retain, nonatomic) NSString *issueCategory;
@property (readonly, nonatomic) char hasContextDictionaryData;
@property (retain, nonatomic) NSData *contextDictionaryData;
@property (nonatomic) char hasRequestTime;
@property (nonatomic) unsigned long long requestTime;
@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) NSString *build;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
