@interface AWDNFCReaderModeExceptionEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _errorCode;
    unsigned int _tagType;
    unsigned int _type;
    BOOL _rfFrameInterface;
    struct { unsigned char timestamp : 1; unsigned char errorCode : 1; unsigned char tagType : 1; unsigned char type : 1; unsigned char rfFrameInterface : 1; } _has;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
