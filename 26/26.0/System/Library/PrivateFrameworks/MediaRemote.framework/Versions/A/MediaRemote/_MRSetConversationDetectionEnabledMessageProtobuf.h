@class NSString;

@interface _MRSetConversationDetectionEnabledMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char enabled : 1; } _has;
}

@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
