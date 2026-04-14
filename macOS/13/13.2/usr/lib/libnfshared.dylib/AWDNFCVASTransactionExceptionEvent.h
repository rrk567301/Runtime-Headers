@class NSData;

@interface AWDNFCVASTransactionExceptionEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _commandType;
    unsigned int _swStatus;
    NSData *_uuidReference;
    struct { unsigned char timestamp : 1; unsigned char commandType : 1; unsigned char swStatus : 1; } _has;
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
