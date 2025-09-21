@class NSString, PBDataReader;

@interface GEOPDModelMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_effectiveModelVersion;
    NSString *_rolloutDeploymentId;
    NSString *_rolloutFactorpackId;
    NSString *_rolloutId;
    NSString *_rolloutRampId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_effectiveModelVersion : 1; unsigned char read_rolloutDeploymentId : 1; unsigned char read_rolloutFactorpackId : 1; unsigned char read_rolloutId : 1; unsigned char read_rolloutRampId : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
