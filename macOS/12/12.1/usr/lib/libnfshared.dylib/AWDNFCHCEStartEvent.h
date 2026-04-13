@class NSData;

@interface AWDNFCHCEStartEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _messageSize;
    unsigned int _messageType;
    unsigned int _type;
    NSData *_uuidReference;
    struct { unsigned char timestamp : 1; unsigned char messageSize : 1; unsigned char messageType : 1; unsigned char type : 1; } _has;
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
