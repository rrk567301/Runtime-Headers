@class NSString, PBDataReader;

@interface GEOPDExperimentMetadata : PBCodable <NSCopying> {
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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;

@end
