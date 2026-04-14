@class NSUUID, NSString;

@interface MTRPluginPBMUUID : PBCodable <NSCopying>

@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;

- (id)initWithUUID:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
