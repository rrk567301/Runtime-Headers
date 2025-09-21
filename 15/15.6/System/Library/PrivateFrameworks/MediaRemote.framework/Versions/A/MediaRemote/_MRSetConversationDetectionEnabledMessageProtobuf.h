@class NSString;

@interface _MRSetConversationDetectionEnabledMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char enabled : 1; } _has;
}

@property (nonatomic) char hasEnabled;
@property (nonatomic) char enabled;
@property (readonly, nonatomic) char hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;

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

@end
