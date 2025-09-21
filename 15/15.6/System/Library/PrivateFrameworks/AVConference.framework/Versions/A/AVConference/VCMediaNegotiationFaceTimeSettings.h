@interface VCMediaNegotiationFaceTimeSettings : PBCodable <NSCopying> {
    struct { unsigned char capabilities : 1; unsigned char linkProbingCapabilityVersion : 1; unsigned char mediaControlInfoSubVersion : 1; unsigned char switches : 1; unsigned char oneToOneModeSupported : 1; } _has;
}

@property (nonatomic) char hasCapabilities;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) char hasSwitches;
@property (nonatomic) unsigned int switches;
@property (nonatomic) char hasOneToOneModeSupported;
@property (nonatomic) char oneToOneModeSupported;
@property (nonatomic) char hasMediaControlInfoSubVersion;
@property (nonatomic) unsigned int mediaControlInfoSubVersion;
@property (nonatomic) char hasLinkProbingCapabilityVersion;
@property (nonatomic) unsigned int linkProbingCapabilityVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (char)SIPDisabled;
- (unsigned char)mediaControlInfoFECFeedbackVersion;
- (char)secureMessagingRequired;

@end
