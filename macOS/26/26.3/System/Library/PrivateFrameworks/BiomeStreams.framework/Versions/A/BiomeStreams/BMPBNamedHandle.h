@class NSString;

@interface BMPBNamedHandle : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasHandle;
@property (retain, nonatomic) NSString *handle;
@property (readonly, nonatomic) BOOL hasContactIdentifier;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) BOOL hasHandleType;
@property (retain, nonatomic) NSString *handleType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
