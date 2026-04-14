@class NSData;

@interface AWDNFCSERemovedEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _hardwareType;
    unsigned int _reason;
    NSData *_uuidReference;
    BOOL _hasCardEmulationStarted;
    BOOL _hasExpressTransactionStarted;
    struct { unsigned char timestamp : 1; unsigned char hardwareType : 1; unsigned char reason : 1; unsigned char hasCardEmulationStarted : 1; unsigned char hasExpressTransactionStarted : 1; } _has;
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
