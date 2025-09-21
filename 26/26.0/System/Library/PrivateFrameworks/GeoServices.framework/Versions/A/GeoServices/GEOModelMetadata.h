@class NSString, PBDataReader;

@interface GEOModelMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_modelVersion;
    NSString *_rolloutDeploymentId;
    NSString *_rolloutFactorpackId;
    NSString *_rolloutId;
    NSString *_rolloutRampId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_modelVersion : 1; unsigned char read_rolloutDeploymentId : 1; unsigned char read_rolloutFactorpackId : 1; unsigned char read_rolloutId : 1; unsigned char read_rolloutRampId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) BOOL hasRolloutId;
@property (retain, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) BOOL hasRolloutDeploymentId;
@property (retain, nonatomic) NSString *rolloutDeploymentId;
@property (readonly, nonatomic) BOOL hasRolloutFactorpackId;
@property (retain, nonatomic) NSString *rolloutFactorpackId;
@property (readonly, nonatomic) BOOL hasRolloutRampId;
@property (retain, nonatomic) NSString *rolloutRampId;

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
