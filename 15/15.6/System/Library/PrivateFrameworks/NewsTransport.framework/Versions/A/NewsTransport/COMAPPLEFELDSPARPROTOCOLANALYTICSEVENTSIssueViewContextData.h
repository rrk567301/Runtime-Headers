@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueViewContextData : PBCodable <NSCopying> {
    struct { unsigned char issueViewContext : 1; } _has;
}

@property (nonatomic) char hasIssueViewContext;
@property (nonatomic) int issueViewContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsIssueViewContext:(id)a0;
- (id)issueViewContextAsString:(int)a0;

@end
