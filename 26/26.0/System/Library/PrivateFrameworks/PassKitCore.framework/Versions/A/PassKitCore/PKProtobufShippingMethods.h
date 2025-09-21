@class NSMutableArray, PKProtobufShippingMethod;

@interface PKProtobufShippingMethods : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *methods;
@property (readonly, nonatomic) BOOL hasDefaultMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *defaultMethod;

+ (Class)methodsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)methodsAtIndex:(unsigned long long)a0;
- (void)addMethods:(id)a0;
- (void)clearMethods;
- (unsigned long long)methodsCount;

@end
