@class NSData;

@interface NTPBIssueExposureData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIssueSessionId;
@property (retain, nonatomic) NSData *issueSessionId;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
