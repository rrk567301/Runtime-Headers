@class NSURL;

@interface _LSClaimBindingURLBindable : LSClaimBindingBindable {
    NSURL *_url;
}

+ (BOOL)supportsSecureCoding;

- (id)URL;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct BindingEvaluator { id x0; id x1; id x2; id x3; id x4; unsigned int x5; id x6; struct LSVersionNumber { unsigned char x0[32]; } x7; id x8; BOOL x9; BOOL x10; unsigned long long x11; unsigned int x12; unsigned int x13; struct vector<LSBundleClass, std::allocator<LSBundleClass>> { unsigned int *x0; unsigned int *x1; unsigned int *x2; } x14; id /* block */ x15; id x16; id /* block */ x17; id x18; id /* block */ x19; })baseBindingEvaluatorWithBindingStyle:(unsigned char)a0 auditToken:(const struct { unsigned int x0[8]; } *)a1;
- (id)typeRecordWithError:(id *)a0;

@end
