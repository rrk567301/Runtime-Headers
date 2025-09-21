@class NSMutableArray;

@interface AWDSymptomsCellularSDMAdviceChange : PBCodable <NSCopying> {
    struct { unsigned char dlPriorThroughputBytesPerSec : 1; unsigned char dlSubsequentThroughputBytesPerSec : 1; unsigned char newAdviceAdditionalFlags : 1; unsigned char previousAdviceDuration : 1; unsigned char timestamp : 1; unsigned char ulPriorThroughputBytesPerSec : 1; unsigned char ulSubsequentThroughputBytesPerSec : 1; unsigned char newAdvice : 1; unsigned char newAdviceCause : 1; unsigned char previousAdvice : 1; unsigned char previousAdviceCause : 1; unsigned char previousAdviceInitialCause : 1; unsigned char newScreenIsDark : 1; unsigned char newScreenIsLocked : 1; unsigned char previousScreenIsDark : 1; unsigned char previousScreenIsLocked : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasPreviousAdvice;
@property (nonatomic) int previousAdvice;
@property (nonatomic) char hasPreviousAdviceCause;
@property (nonatomic) int previousAdviceCause;
@property (nonatomic) char hasPreviousAdviceDuration;
@property (nonatomic) unsigned long long previousAdviceDuration;
@property (nonatomic) char hasDlPriorThroughputBytesPerSec;
@property (nonatomic) unsigned long long dlPriorThroughputBytesPerSec;
@property (nonatomic) char hasUlPriorThroughputBytesPerSec;
@property (nonatomic) unsigned long long ulPriorThroughputBytesPerSec;
@property (nonatomic) char hasNewAdvice;
@property (nonatomic) int newAdvice;
@property (nonatomic) char hasNewAdviceCause;
@property (nonatomic) int newAdviceCause;
@property (nonatomic) char hasNewAdviceAdditionalFlags;
@property (nonatomic) unsigned long long newAdviceAdditionalFlags;
@property (nonatomic) char hasDlSubsequentThroughputBytesPerSec;
@property (nonatomic) unsigned long long dlSubsequentThroughputBytesPerSec;
@property (nonatomic) char hasUlSubsequentThroughputBytesPerSec;
@property (nonatomic) unsigned long long ulSubsequentThroughputBytesPerSec;
@property (retain, nonatomic) NSMutableArray *adviceInitiatingNames;
@property (retain, nonatomic) NSMutableArray *oldAdvicePartipants;
@property (nonatomic) char hasPreviousScreenIsDark;
@property (nonatomic) char previousScreenIsDark;
@property (nonatomic) char hasPreviousScreenIsLocked;
@property (nonatomic) char previousScreenIsLocked;
@property (nonatomic) char hasNewScreenIsDark;
@property (nonatomic) char newScreenIsDark;
@property (nonatomic) char hasNewScreenIsLocked;
@property (nonatomic) char newScreenIsLocked;
@property (nonatomic) char hasPreviousAdviceInitialCause;
@property (nonatomic) int previousAdviceInitialCause;

+ (Class)adviceInitiatingNamesType;
+ (Class)oldAdvicePartipantsType;

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
- (int)StringAsNewAdviceCause:(id)a0;
- (int)StringAsPreviousAdvice:(id)a0;
- (int)StringAsPreviousAdviceInitialCause:(id)a0;
- (int)StringAsNewAdvice:(id)a0;
- (int)StringAsPreviousAdviceCause:(id)a0;
- (void)addAdviceInitiatingNames:(id)a0;
- (void)addOldAdvicePartipants:(id)a0;
- (id)adviceInitiatingNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)adviceInitiatingNamesCount;
- (void)clearAdviceInitiatingNames;
- (void)clearOldAdvicePartipants;
- (id)newAdviceAsString:(int)a0;
- (id)newAdviceCauseAsString:(int)a0;
- (id)oldAdvicePartipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)oldAdvicePartipantsCount;
- (id)previousAdviceAsString:(int)a0;
- (id)previousAdviceCauseAsString:(int)a0;
- (id)previousAdviceInitialCauseAsString:(int)a0;

@end
