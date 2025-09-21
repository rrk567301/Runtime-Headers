@class NSData;

@interface _MRGroupSessionFastSyncMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char messageType : 1; } _has;
}

@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) int messageType;
@property (readonly, nonatomic) BOOL hasPayload;
@property (retain, nonatomic) NSData *payload;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (int)StringAsMessageType:(id)a0;
- (id)messageTypeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
