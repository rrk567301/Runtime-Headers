@interface VCPProtoTime : PBCodable <NSCopying>

@property (nonatomic) long long value;
@property (nonatomic) int timescale;
@property (nonatomic) unsigned int flags;
@property (nonatomic) long long epoch;

+ (id)timeWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeValue;

@end
