@interface ICTuple : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id secondObject;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFirstObject:(id)a0 secondObject:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
