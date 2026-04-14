@class NSData, NSString;

@interface _MPCProtoMigrationDataPayload : PBCodable <NSCopying> {
    int _revision;
    NSString *_type;
    struct { unsigned char revision : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
