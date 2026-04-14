@interface ICTuple : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id secondObject;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithFirstObject:(id)a0 secondObject:(id)a1;

@end
