@class NSString;

@interface _MRSetListeningModeMessageProtobuf : PBCodable <NSCopying> {
    NSString *_listeningMode;
    NSString *_outputDeviceUID;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
