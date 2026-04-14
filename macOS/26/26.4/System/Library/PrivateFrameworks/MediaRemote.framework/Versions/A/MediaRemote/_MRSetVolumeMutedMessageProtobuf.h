@class NSString, _MRRequestDetailsProtobuf;

@interface _MRSetVolumeMutedMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char isMuted : 1; } _has;
}

@property (nonatomic) BOOL hasIsMuted;
@property (nonatomic) BOOL isMuted;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) BOOL hasDetails;
@property (retain, nonatomic) _MRRequestDetailsProtobuf *details;

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

@end
