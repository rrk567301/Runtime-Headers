@class NSData, NSString;

@interface _MPCProtoDelegateInfoTokenB : PBCodable <NSCopying> {
    unsigned long long _sessionID;
    NSData *_hardwareInfoData;
    NSData *_machineIDData;
    NSData *_picData;
    NSString *_userAgent;
    struct { unsigned char sessionID : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
