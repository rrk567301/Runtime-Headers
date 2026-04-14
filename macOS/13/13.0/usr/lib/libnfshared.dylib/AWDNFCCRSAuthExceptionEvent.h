@class NSData;

@interface AWDNFCCRSAuthExceptionEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _statusCode;
    unsigned int _type;
    NSData *_uuidReference;
    struct { unsigned char timestamp : 1; unsigned char statusCode : 1; unsigned char type : 1; } _has;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
