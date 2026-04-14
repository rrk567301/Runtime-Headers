@interface CKCBCorecryptoECScalar : NSObject

@property (readonly, nonatomic) const struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *group;
@property (readonly, nonatomic) const unsigned long long *corecryptoScalar;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)scalarAllocationSizeForGroup:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a0;
- (id)initWithx963Representation:(id)a0 group:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a1;
- (id)initWithScalarPointer:(unsigned long long *)a0 forGroup:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a1;
- (id)x963Representation;
- (id)initWithRandomScalarInGroup:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a0;
- (id)initWithData:(id)a0 inGroup:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[0]; } *)a1 reduction:(BOOL)a2 corecryptoError:(int *)a3;
- (id)serializedBigEndianScalar;
- (id)mapToCurve_SSWU_RandomOracle;
- (id)add:(id)a0 corecryptoError:(int *)a1;
- (id)sub:(id)a0 corecryptoError:(int *)a1;
- (id)multiply:(id)a0 corecryptoError:(int *)a1;
- (id)inverseModOrder;

@end
