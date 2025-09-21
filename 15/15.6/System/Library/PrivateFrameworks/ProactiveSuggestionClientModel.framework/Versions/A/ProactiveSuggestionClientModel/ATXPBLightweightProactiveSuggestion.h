@class NSString, ATXPBProactiveSuggestionScoreSpecification;

@interface ATXPBLightweightProactiveSuggestion : PBCodable <NSCopying> {
    struct { unsigned char predictionReasons : 1; } _has;
}

@property (readonly, nonatomic) char hasExecutableIdentifier;
@property (retain, nonatomic) NSString *executableIdentifier;
@property (readonly, nonatomic) char hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (readonly, nonatomic) char hasScoreSpecification;
@property (retain, nonatomic) ATXPBProactiveSuggestionScoreSpecification *scoreSpecification;
@property (nonatomic) char hasPredictionReasons;
@property (nonatomic) unsigned long long predictionReasons;

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
