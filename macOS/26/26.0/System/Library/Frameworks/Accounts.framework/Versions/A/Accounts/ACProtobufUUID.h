@class NSUUID, NSString;

@interface ACProtobufUUID : PBCodable <NSCopying>

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *value;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithUUID:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
