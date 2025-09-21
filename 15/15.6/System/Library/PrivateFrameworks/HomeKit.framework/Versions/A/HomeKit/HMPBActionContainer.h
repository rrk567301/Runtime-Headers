@class HMPBCharacteristicWriteAction, HMPBMatterCommandAction, HMPBNaturalLightingAction, HMPBMediaPlaybackAction;

@interface HMPBActionContainer : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasCharacteristicWriteAction;
@property (retain, nonatomic) HMPBCharacteristicWriteAction *characteristicWriteAction;
@property (readonly, nonatomic) char hasMediaPlaybackAction;
@property (retain, nonatomic) HMPBMediaPlaybackAction *mediaPlaybackAction;
@property (readonly, nonatomic) char hasNaturalLightingAction;
@property (retain, nonatomic) HMPBNaturalLightingAction *naturalLightingAction;
@property (readonly, nonatomic) char hasMatterCommandAction;
@property (retain, nonatomic) HMPBMatterCommandAction *matterCommandAction;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
