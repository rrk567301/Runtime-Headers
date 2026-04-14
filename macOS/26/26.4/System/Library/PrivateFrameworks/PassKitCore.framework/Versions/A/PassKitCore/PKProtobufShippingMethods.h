@class NSMutableArray, PKProtobufShippingMethod;

@interface PKProtobufShippingMethods : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *methods;
@property (readonly, nonatomic) BOOL hasDefaultMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *defaultMethod;

+ (Class)methodsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)methodsAtIndex:(unsigned long long)a0;
- (void)addMethods:(id)a0;
- (void)clearMethods;
- (unsigned long long)methodsCount;

@end
