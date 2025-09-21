@class NSString, NSMutableArray;

@interface CLPMeta : PBCodable <NSCopying> {
    struct { unsigned char submissionId : 1; } _has;
}

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *softwareVersion;
@property (nonatomic) char hasSubmissionId;
@property (nonatomic) long long submissionId;
@property (readonly, nonatomic) char hasProbeId;
@property (retain, nonatomic) NSString *probeId;
@property (retain, nonatomic) NSMutableArray *regulatoryDomainEstimates;

+ (Class)regulatoryDomainEstimatesType;

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
- (void)addRegulatoryDomainEstimates:(id)a0;
- (void)clearRegulatoryDomainEstimates;
- (id)regulatoryDomainEstimatesAtIndex:(unsigned long long)a0;
- (unsigned long long)regulatoryDomainEstimatesCount;

@end
