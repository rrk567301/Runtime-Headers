@class ATXPBTaskAgnosticBehaviorFeatureVector;

@interface ATXPBTaskAgnosticBehaviorSample : PBCodable <NSCopying> {
    struct { unsigned char timeIntervalSinceReferenceDate : 1; unsigned char type : 1; unsigned char engaged : 1; } _has;
}

@property (nonatomic) BOOL hasTimeIntervalSinceReferenceDate;
@property (nonatomic) double timeIntervalSinceReferenceDate;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasEngaged;
@property (nonatomic) BOOL engaged;
@property (readonly, nonatomic) BOOL hasFeatureVector;
@property (retain, nonatomic) ATXPBTaskAgnosticBehaviorFeatureVector *featureVector;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)typeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
