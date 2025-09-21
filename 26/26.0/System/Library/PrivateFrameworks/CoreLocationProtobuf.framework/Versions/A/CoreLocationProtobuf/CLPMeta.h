@class NSString, NSMutableArray;

@interface CLPMeta : PBCodable <NSCopying> {
    struct { unsigned char submissionId : 1; } _has;
}

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *softwareVersion;
@property (nonatomic) BOOL hasSubmissionId;
@property (nonatomic) long long submissionId;
@property (readonly, nonatomic) BOOL hasProbeId;
@property (retain, nonatomic) NSString *probeId;
@property (retain, nonatomic) NSMutableArray *regulatoryDomainEstimates;

+ (Class)regulatoryDomainEstimatesType;

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
- (void)addRegulatoryDomainEstimates:(id)a0;
- (void)clearRegulatoryDomainEstimates;
- (id)regulatoryDomainEstimatesAtIndex:(unsigned long long)a0;
- (unsigned long long)regulatoryDomainEstimatesCount;

@end
