@class NSData;

@interface AWDNFCReaderSessionBurnoutTimerInvoked : PBCodable <NSCopying> {
    unsigned long long _duration;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _currentBatteryLevel;
    unsigned int _tagType;
    unsigned int _type;
    NSData *_uuidReference;
    struct { unsigned char duration : 1; unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char currentBatteryLevel : 1; unsigned char tagType : 1; unsigned char type : 1; } _has;
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
