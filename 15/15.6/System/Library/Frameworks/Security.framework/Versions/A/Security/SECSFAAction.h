@class NSString, SECSFAActionDropEvent, SECSFAActionAutomaticBugCapture, SECSFAActionTapToRadar;

@interface SECSFAAction : PBCodable <NSCopying> {
    struct { unsigned char action : 1; } _has;
}

@property (readonly, nonatomic) char hasRadarnumber;
@property (retain, nonatomic) NSString *radarnumber;
@property (readonly, nonatomic) char hasTtr;
@property (retain, nonatomic) SECSFAActionTapToRadar *ttr;
@property (readonly, nonatomic) char hasAbc;
@property (retain, nonatomic) SECSFAActionAutomaticBugCapture *abc;
@property (readonly, nonatomic) char hasDrop;
@property (retain, nonatomic) SECSFAActionDropEvent *drop;
@property (nonatomic) char hasAction;
@property (nonatomic) int action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)actionAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsAction:(id)a0;
- (void)clearOneofValuesForAction;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
