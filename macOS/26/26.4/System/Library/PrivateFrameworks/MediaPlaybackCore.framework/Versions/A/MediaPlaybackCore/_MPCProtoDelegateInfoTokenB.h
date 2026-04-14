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
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
