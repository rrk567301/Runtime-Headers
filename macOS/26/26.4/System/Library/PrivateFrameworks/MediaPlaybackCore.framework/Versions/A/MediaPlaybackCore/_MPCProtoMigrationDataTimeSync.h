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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
