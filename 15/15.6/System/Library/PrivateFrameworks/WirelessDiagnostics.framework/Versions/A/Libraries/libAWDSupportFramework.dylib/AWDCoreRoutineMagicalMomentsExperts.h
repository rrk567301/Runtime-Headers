@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsExperts : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationSinceLastSuccessfulTraining : 1; unsigned char trainingTime : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDurationSinceLastSuccessfulTraining;
@property (nonatomic) int durationSinceLastSuccessfulTraining;
@property (nonatomic) char hasTrainingTime;
@property (nonatomic) int trainingTime;
@property (retain, nonatomic) NSMutableArray *experts;
@property (retain, nonatomic) NSMutableArray *suggestions;

+ (Class)suggestionsType;
+ (Class)expertsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSuggestions:(id)a0;
- (id)expertsAtIndex:(unsigned long long)a0;
- (void)addExperts:(id)a0;
- (void)clearExperts;
- (void)clearSuggestions;
- (unsigned long long)expertsCount;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionsCount;

@end
