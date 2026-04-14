@class NSData;

@interface AWDNFCHCIStartOfTransactionEvent : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _status;
    NSData *_uuidReference;
    unsigned int _version;
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char status : 1; unsigned char version : 1; } _has;
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
