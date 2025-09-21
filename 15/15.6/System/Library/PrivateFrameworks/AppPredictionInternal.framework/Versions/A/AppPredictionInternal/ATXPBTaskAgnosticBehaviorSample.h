@class ATXPBTaskAgnosticBehaviorFeatureVector;

@interface ATXPBTaskAgnosticBehaviorSample : PBCodable <NSCopying> {
    struct { unsigned char timeIntervalSinceReferenceDate : 1; unsigned char type : 1; unsigned char engaged : 1; } _has;
}

@property (nonatomic) char hasTimeIntervalSinceReferenceDate;
@property (nonatomic) double timeIntervalSinceReferenceDate;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasEngaged;
@property (nonatomic) char engaged;
@property (readonly, nonatomic) char hasFeatureVector;
@property (retain, nonatomic) ATXPBTaskAgnosticBehaviorFeatureVector *featureVector;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
