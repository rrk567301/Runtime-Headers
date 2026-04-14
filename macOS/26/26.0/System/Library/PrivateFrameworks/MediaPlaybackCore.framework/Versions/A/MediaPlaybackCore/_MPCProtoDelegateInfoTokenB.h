@class NSData, NSString;

@interface _MPCProtoDelegateInfoTokenB : PBCodable <NSCopying> {
    unsigned long long _sessionID;
    NSData *_hardwareInfoData;
    NSData *_machineIDData;
    NSData *_picData;
    NSString *_userAgent;
    struct { unsigned char sessionID : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
