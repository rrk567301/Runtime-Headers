@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventMarcoLiteUsage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_usageStates;
    unsigned int _totalNavTime;
    int _vioTrigger;
    struct { unsigned char has_totalNavTime : 1; unsigned char has_vioTrigger : 1; } _flags;
}

@property (nonatomic) char hasTotalNavTime;
@property (nonatomic) unsigned int totalNavTime;
@property (retain, nonatomic) NSMutableArray *usageStates;
@property (nonatomic) char hasVioTrigger;
@property (nonatomic) int vioTrigger;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)usageStatesType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addUsageStates:(id)a0;
- (int)StringAsVioTrigger:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (void)clearUsageStates;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)usageStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)usageStatesCount;
- (id)vioTriggerAsString:(int)a0;

@end
