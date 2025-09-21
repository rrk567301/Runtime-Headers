@class NSArray;

@interface REMTemplateSectionsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *templateStorages;
@property (readonly, nonatomic) NSArray *templateSectionStorages;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTemplateStorages:(id)a0 templateSectionStorages:(id)a1;

@end
