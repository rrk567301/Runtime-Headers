@class NSString;

@interface PPM2NamedEntitiesScored : PBCodable <NSCopying> {
    struct { unsigned char resultSizeLog10 : 1; unsigned char error : 1; unsigned char exclusionSpec : 1; unsigned char limitHit : 1; unsigned char timeLimited : 1; unsigned char timeSpec : 1; } _has;
}

@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char hasResultSizeLog10;
@property (nonatomic) unsigned int resultSizeLog10;
@property (nonatomic) char hasLimitHit;
@property (nonatomic) char limitHit;
@property (nonatomic) char hasTimeSpec;
@property (nonatomic) char timeSpec;
@property (nonatomic) char hasTimeLimited;
@property (nonatomic) char timeLimited;
@property (nonatomic) char hasExclusionSpec;
@property (nonatomic) char exclusionSpec;
@property (nonatomic) char hasError;
@property (nonatomic) char error;
@property (readonly, nonatomic) char hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

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

@end
