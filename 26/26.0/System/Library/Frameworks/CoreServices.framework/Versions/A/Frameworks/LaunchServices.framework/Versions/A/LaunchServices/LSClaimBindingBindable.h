@class NSString;

@interface LSClaimBindingBindable : NSObject <NSObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bindableWithDocumentProxy:(id)a0;
+ (id)bindableWithTypeIdentifier:(id)a0;
+ (id)bindableWithURL:(id)a0;

- (id)URL;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)typeIdentifier;
- (id)_initProtected;
- (struct BindingEvaluator { id x0; id x1; id x2; id x3; id x4; unsigned int x5; id x6; struct LSVersionNumber { unsigned char x0[32]; } x7; id x8; BOOL x9; BOOL x10; unsigned long long x11; unsigned int x12; unsigned int x13; struct vector<LSBundleClass, std::allocator<LSBundleClass>> { unsigned int *x0; unsigned int *x1; unsigned int *x2; } x14; id /* block */ x15; id x16; id /* block */ x17; id x18; id /* block */ x19; })baseBindingEvaluatorWithBindingStyle:(unsigned char)a0 auditToken:(const struct { unsigned int x0[8]; } *)a1;
- (id)documentProxy;
- (id)typeRecordWithError:(id *)a0;

@end
