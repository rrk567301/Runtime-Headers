@class NSString, NTPBRecordBase;

@interface NTPBChannelMembershipRecord : PBCodable <NSCopying> {
    struct { unsigned char canAccessDrafts : 1; } _has;
}

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) char hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (nonatomic) char hasCanAccessDrafts;
@property (nonatomic) char canAccessDrafts;
@property (readonly, nonatomic) char hasDraftArticleListID;
@property (retain, nonatomic) NSString *draftArticleListID;
@property (readonly, nonatomic) char hasDraftIssueListID;
@property (retain, nonatomic) NSString *draftIssueListID;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
