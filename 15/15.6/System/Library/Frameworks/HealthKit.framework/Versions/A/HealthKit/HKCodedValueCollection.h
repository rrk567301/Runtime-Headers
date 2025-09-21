@class NSArray, NSString;

@interface HKCodedValueCollection : NSObject <NSSecureCoding, NSCopying, HKCodedObject>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *codedValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)codedValueCollectionWithCodedValues:(id)a0;
+ (id)indexableKeyPathsWithPrefix:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)initWithCodedValues:(id)a0;

@end
