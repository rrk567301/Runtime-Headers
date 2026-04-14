@class NSData;

@interface AWDNFCHCIActivityTimeout : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _command;
    unsigned int _commandParam1;
    unsigned int _commandResult;
    unsigned int _expressType;
    unsigned int _spid;
    unsigned int _timeoutValue;
    NSData *_uuidReference;
    unsigned int _version;
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char command : 1; unsigned char commandParam1 : 1; unsigned char commandResult : 1; unsigned char expressType : 1; unsigned char spid : 1; unsigned char timeoutValue : 1; unsigned char version : 1; } _has;
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
