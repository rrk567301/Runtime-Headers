@class NSString, NSData;

@interface NWPBSendData : PBCodable <NSCopying> {
    NSString *_clientUUID;
    NSData *_messageData;
    unsigned int _receiveWindow;
    struct { unsigned char receiveWindow : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
