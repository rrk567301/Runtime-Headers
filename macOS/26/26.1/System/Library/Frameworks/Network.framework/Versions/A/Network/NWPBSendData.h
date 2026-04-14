@class NSString, NSData;

@interface NWPBSendData : PBCodable <NSCopying> {
    NSString *_clientUUID;
    NSData *_messageData;
    unsigned int _receiveWindow;
    struct { unsigned char receiveWindow : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
