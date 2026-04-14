@class NSString;

@interface _MRSetConversationDetectionEnabledMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char enabled : 1; } _has;
}

@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;

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
