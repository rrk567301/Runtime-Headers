@interface NTPBIssueViewContextData : PBCodable <NSCopying> {
    struct { unsigned char issueViewContext : 1; } _has;
}

@property (nonatomic) char hasIssueViewContext;
@property (nonatomic) int issueViewContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
