@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {
    struct { unsigned char deviceID : 1; unsigned char recordingState : 1; } _has;
}

@property (nonatomic) BOOL hasDeviceID;
@property (nonatomic) unsigned int deviceID;
@property (readonly, nonatomic) BOOL hasDescriptor;
@property (retain, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic) BOOL hasRecordingState;
@property (nonatomic) int recordingState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsRecordingState:(id)a0;
- (id)recordingStateAsString:(int)a0;

@end
