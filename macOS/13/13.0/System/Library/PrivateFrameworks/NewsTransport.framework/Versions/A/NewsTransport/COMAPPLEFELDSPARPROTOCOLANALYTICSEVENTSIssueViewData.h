@class NSData;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueViewData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIssueViewingSessionId;
@property (retain, nonatomic) NSData *issueViewingSessionId;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
