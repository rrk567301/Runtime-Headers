@class NSString;

@interface _MPCProtoMigrationDataTimeSync : PBCodable <NSCopying> {
    double _anchorTime;
    double _anchorTimestamp;
    double _duration;
    NSString *_itemID;
    float _rate;
    BOOL _isLive;
    struct { unsigned char anchorTime : 1; unsigned char anchorTimestamp : 1; unsigned char duration : 1; unsigned char rate : 1; unsigned char isLive : 1; } _has;
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
