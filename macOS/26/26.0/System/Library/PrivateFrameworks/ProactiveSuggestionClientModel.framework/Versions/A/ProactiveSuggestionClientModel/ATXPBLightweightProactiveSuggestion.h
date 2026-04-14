@class NSString, ATXPBProactiveSuggestionScoreSpecification;

@interface ATXPBLightweightProactiveSuggestion : PBCodable <NSCopying> {
    struct { unsigned char predictionReasons : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExecutableIdentifier;
@property (retain, nonatomic) NSString *executableIdentifier;
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (readonly, nonatomic) BOOL hasScoreSpecification;
@property (retain, nonatomic) ATXPBProactiveSuggestionScoreSpecification *scoreSpecification;
@property (nonatomic) BOOL hasPredictionReasons;
@property (nonatomic) unsigned long long predictionReasons;

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

@end
