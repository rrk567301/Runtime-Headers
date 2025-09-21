@class NSString, BSObjCValue, NSDictionary, BSObjCMethod;

@interface BSObjCProperty : NSObject <BSDescriptionProviding> {
    NSString *_customGetter;
    NSString *_customSetter;
    NSDictionary *_customAttributes;
    char _nonatomic;
    char _readonly;
    char _copy;
    char _strong;
    char _weak;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isRequired) char required;
@property (readonly, nonatomic) BSObjCValue *value;
@property (readonly, nonatomic) BSObjCMethod *getter;
@property (readonly, nonatomic) BSObjCMethod *setter;
@property (readonly, nonatomic, getter=isAtomic) char atomic;
@property (readonly, nonatomic, getter=isNonAtomic) char nonAtomic;
@property (readonly, nonatomic, getter=isReadOnly) char readOnly;
@property (readonly, nonatomic, getter=isReadWrite) char readWrite;
@property (readonly, nonatomic, getter=isAssign) char assign;
@property (readonly, nonatomic, getter=isCopy) char copy;
@property (readonly, nonatomic, getter=isStrong) char strong;
@property (readonly, nonatomic, getter=isWeak) char weak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyWithBuilder:(id /* block */)a0;
+ (id)propertyWithBuilder:(id /* block */)a0 error:(out id *)a1;
+ (id)propertyWithName:(id)a0 attributes:(id)a1 error:(out id *)a2;
+ (id)propertyWithProperty:(struct objc_property { } *)a0 error:(out id *)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyAsReadWrite;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyAddingCustomAttributes:(id)a0;
- (id)customAttributeForKey:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
