@interface TVRMSControlInterfaceMessage : PBCodable <NSCopying> {
    struct { unsigned char supportsDirectionalControl : 1; unsigned char supportsSpeakerSelection : 1; unsigned char supportsVolumeControl : 1; } _has;
}

@property (nonatomic) char hasSupportsSpeakerSelection;
@property (nonatomic) char supportsSpeakerSelection;
@property (nonatomic) char hasSupportsVolumeControl;
@property (nonatomic) char supportsVolumeControl;
@property (nonatomic) char hasSupportsDirectionalControl;
@property (nonatomic) char supportsDirectionalControl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
