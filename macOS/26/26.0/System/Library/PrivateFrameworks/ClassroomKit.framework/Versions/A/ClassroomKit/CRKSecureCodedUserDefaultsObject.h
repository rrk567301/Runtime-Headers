@class NSSet;

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject

@property (readonly, copy, nonatomic) NSSet *classes;

- (void)setValue:(id)a0;
- (id)value;
- (id)valueWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)setValue:(id)a0 error:(id *)a1;
- (id)initWithDefaults:(id)a0 key:(id)a1 classes:(id)a2;
- (id)initWithKey:(id)a0 classes:(id)a1;
- (id)initWithStore:(id)a0 key:(id)a1 classes:(id)a2;
- (void)registerDefaultValue:(id)a0;

@end
