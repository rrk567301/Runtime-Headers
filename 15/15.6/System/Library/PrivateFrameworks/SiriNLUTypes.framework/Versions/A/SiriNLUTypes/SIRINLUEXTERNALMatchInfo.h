@class SIRICOMMONFloatValue, SIRICOMMONUInt32Value;

@interface SIRINLUEXTERNALMatchInfo : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _matchedAliasTypes;
    struct { unsigned char matchSignalBitset : 1; } _has;
}

@property (nonatomic) char hasMatchSignalBitset;
@property (nonatomic) unsigned int matchSignalBitset;
@property (readonly, nonatomic) char hasMatchScore;
@property (retain, nonatomic) SIRICOMMONFloatValue *matchScore;
@property (readonly, nonatomic) char hasMaxTokenCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *maxTokenCount;
@property (readonly, nonatomic) char hasMatchedTokenCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *matchedTokenCount;
@property (readonly, nonatomic) char hasMaxStopWordCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *maxStopWordCount;
@property (readonly, nonatomic) char hasMatchedStopWordCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *matchedStopWordCount;
@property (readonly, nonatomic) char hasEditDistance;
@property (retain, nonatomic) SIRICOMMONUInt32Value *editDistance;
@property (readonly, nonatomic) char hasMaxAliasCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *maxAliasCount;
@property (readonly, nonatomic) char hasMatchedAliasCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *matchedAliasCount;
@property (readonly, nonatomic) unsigned long long matchedAliasTypesCount;
@property (readonly, nonatomic) int *matchedAliasTypes;

- (void)dealloc;
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
- (void)addMatchedAliasTypes:(int)a0;
- (void)clearMatchedAliasTypes;
- (int)matchedAliasTypesAtIndex:(unsigned long long)a0;
- (int)StringAsMatchedAliasTypes:(id)a0;
- (id)matchedAliasTypesAsString:(int)a0;
- (void)setMatchedAliasTypes:(int *)a0 count:(unsigned long long)a1;

@end
