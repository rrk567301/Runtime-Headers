@interface ICTuple : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id secondObject;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)initWithFirstObject:(id)a0 secondObject:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
