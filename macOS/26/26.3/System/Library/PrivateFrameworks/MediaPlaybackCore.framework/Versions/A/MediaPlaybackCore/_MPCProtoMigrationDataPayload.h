@class NSData, NSString;

@interface _MPCProtoMigrationDataPayload : PBCodable <NSCopying> {
    int _revision;
    NSString *_type;
    struct { unsigned char revision : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
