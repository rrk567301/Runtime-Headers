@interface CKTuple2 : CKTuple

@property (retain, nonatomic) id v1;
@property (retain, nonatomic) id v2;

- (id)initWithObject1:(id)a0 object2:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
