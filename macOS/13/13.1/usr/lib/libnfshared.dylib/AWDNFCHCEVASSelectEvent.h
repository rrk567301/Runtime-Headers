@class NSData;

@interface AWDNFCHCEVASSelectEvent : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _mobileCapabilities;
    unsigned int _swStatus;
    NSData *_uuidReference;
    unsigned int _version;
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char mobileCapabilities : 1; unsigned char swStatus : 1; unsigned char version : 1; } _has;
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
