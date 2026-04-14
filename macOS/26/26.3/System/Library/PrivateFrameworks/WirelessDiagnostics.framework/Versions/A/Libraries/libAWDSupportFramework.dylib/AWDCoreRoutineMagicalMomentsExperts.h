@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsExperts : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationSinceLastSuccessfulTraining : 1; unsigned char trainingTime : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationSinceLastSuccessfulTraining;
@property (nonatomic) int durationSinceLastSuccessfulTraining;
@property (nonatomic) BOOL hasTrainingTime;
@property (nonatomic) int trainingTime;
@property (retain, nonatomic) NSMutableArray *experts;
@property (retain, nonatomic) NSMutableArray *suggestions;

+ (Class)suggestionsType;
+ (Class)expertsType;

- (void)clearSuggestions;
- (id)dictionaryRepresentation;
- (void)addSuggestions:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)suggestionsCount;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (id)expertsAtIndex:(unsigned long long)a0;
- (void)addExperts:(id)a0;
- (void)clearExperts;
- (unsigned long long)expertsCount;

@end
