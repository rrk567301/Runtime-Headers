@interface AWDNFCPTOperation : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _awdErrorCode;
    unsigned int _errorCode;
    unsigned int _errorStep;
    unsigned int _operationType;
    struct { unsigned char timestamp : 1; unsigned char awdErrorCode : 1; unsigned char errorCode : 1; unsigned char errorStep : 1; unsigned char operationType : 1; } _has;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
