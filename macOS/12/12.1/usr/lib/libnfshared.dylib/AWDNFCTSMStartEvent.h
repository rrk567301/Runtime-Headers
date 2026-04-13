@class NSString, NSData;

@interface AWDNFCTSMStartEvent : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _idxTableAvail;
    unsigned int _persistentAvail;
    unsigned int _transientDeselectAvail;
    unsigned int _transientResetAvail;
    NSString *_url;
    NSData *_uuidReference;
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char idxTableAvail : 1; unsigned char persistentAvail : 1; unsigned char transientDeselectAvail : 1; unsigned char transientResetAvail : 1; } _has;
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
