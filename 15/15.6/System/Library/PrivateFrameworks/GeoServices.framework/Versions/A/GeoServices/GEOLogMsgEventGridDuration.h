@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventGridDuration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_endStateErrorReasons;
    int _displayType;
    unsigned int _durationMs;
    int _endState;
    int _previousState;
    struct { unsigned char has_displayType : 1; unsigned char has_durationMs : 1; unsigned char has_endState : 1; unsigned char has_previousState : 1; } _flags;
}

@property (nonatomic) char hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) char hasEndState;
@property (nonatomic) int endState;
@property (retain, nonatomic) NSMutableArray *endStateErrorReasons;
@property (nonatomic) char hasPreviousState;
@property (nonatomic) int previousState;
@property (nonatomic) char hasDisplayType;
@property (nonatomic) int displayType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)endStateErrorReasonType;
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
- (int)StringAsDisplayType:(id)a0;
- (int)StringAsEndState:(id)a0;
- (int)StringAsPreviousState:(id)a0;
- (void)addEndStateErrorReason:(id)a0;
- (void)clearEndStateErrorReasons;
- (void)clearUnknownFields:(char)a0;
- (id)displayTypeAsString:(int)a0;
- (id)endStateAsString:(int)a0;
- (id)endStateErrorReasonAtIndex:(unsigned long long)a0;
- (unsigned long long)endStateErrorReasonsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)previousStateAsString:(int)a0;
- (void)readAll:(char)a0;

@end
