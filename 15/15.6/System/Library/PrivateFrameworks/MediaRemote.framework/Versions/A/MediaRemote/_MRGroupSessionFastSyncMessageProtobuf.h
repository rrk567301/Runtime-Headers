@class NSData;

@interface _MRGroupSessionFastSyncMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char messageType : 1; } _has;
}

@property (nonatomic) char hasMessageType;
@property (nonatomic) int messageType;
@property (readonly, nonatomic) char hasPayload;
@property (retain, nonatomic) NSData *payload;

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
- (int)StringAsMessageType:(id)a0;
- (id)messageTypeAsString:(int)a0;

@end
