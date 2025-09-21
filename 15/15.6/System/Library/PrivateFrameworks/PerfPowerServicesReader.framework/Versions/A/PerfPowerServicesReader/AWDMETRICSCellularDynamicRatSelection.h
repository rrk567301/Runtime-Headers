@interface AWDMETRICSCellularDynamicRatSelection : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char bwObservedAfterSwitch : 1; unsigned char bwObservedBeforeSwitch : 1; unsigned char destRat : 1; unsigned char dlTputObservedAfterSwitch : 1; unsigned char dlTputObservedBeforeSwitch : 1; unsigned char sourceRat : 1; unsigned char subsId : 1; unsigned char ulTputObservedAfterSwitch : 1; unsigned char ulTputObservedBeforeSwitch : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSourceRat;
@property (nonatomic) int sourceRat;
@property (nonatomic) char hasDestRat;
@property (nonatomic) int destRat;
@property (nonatomic) char hasDlTputObservedBeforeSwitch;
@property (nonatomic) unsigned int dlTputObservedBeforeSwitch;
@property (nonatomic) char hasDlTputObservedAfterSwitch;
@property (nonatomic) unsigned int dlTputObservedAfterSwitch;
@property (nonatomic) char hasBwObservedBeforeSwitch;
@property (nonatomic) unsigned int bwObservedBeforeSwitch;
@property (nonatomic) char hasBwObservedAfterSwitch;
@property (nonatomic) unsigned int bwObservedAfterSwitch;
@property (nonatomic) char hasUlTputObservedBeforeSwitch;
@property (nonatomic) unsigned int ulTputObservedBeforeSwitch;
@property (nonatomic) char hasUlTputObservedAfterSwitch;
@property (nonatomic) unsigned int ulTputObservedAfterSwitch;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSourceRat:(id)a0;
- (int)StringAsDestRat:(id)a0;
- (id)destRatAsString:(int)a0;
- (id)sourceRatAsString:(int)a0;

@end
