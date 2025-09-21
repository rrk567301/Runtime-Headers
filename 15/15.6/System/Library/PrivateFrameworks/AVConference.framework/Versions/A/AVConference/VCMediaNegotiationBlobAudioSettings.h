@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying> {
    struct { unsigned char audioUnitModel : 1; } _has;
}

@property (readonly, nonatomic) char allowAudioRecording;
@property (readonly, nonatomic) char allowAudioSwitching;
@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) char hasAudioUnitModel;
@property (nonatomic) unsigned int audioUnitModel;
@property (nonatomic) unsigned int supportFlags;
@property (nonatomic) unsigned int payloadFlags;
@property (nonatomic) unsigned int secondaryFlags;
@property (nonatomic) char useSBR;

+ (char)isAudioPayloadSupported:(int)a0;
+ (int)negotiationPayloadFromPayload:(int)a0;
+ (int)payloadFromNegotiationPayload:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithAudioConfiguration:(id)a0;
- (id)newMediaNegotiatorAudioConfiguration;
- (void)printWithLogFile:(void *)a0;

@end
