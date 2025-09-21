@class NSString, PBDataReader;

@interface GEOExperimentMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_experimentDescription;
    NSString *_experimentId;
    NSString *_treatmentId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _deploymentId;
    struct { unsigned char has_deploymentId : 1; unsigned char read_experimentDescription : 1; unsigned char read_experimentId : 1; unsigned char read_treatmentId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) unsigned int deploymentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL hasExperimentDescription;
@property (retain, nonatomic) NSString *experimentDescription;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
