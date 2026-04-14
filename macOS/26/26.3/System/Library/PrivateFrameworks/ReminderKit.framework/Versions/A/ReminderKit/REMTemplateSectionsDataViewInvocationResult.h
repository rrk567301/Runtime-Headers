@class NSArray;

@interface REMTemplateSectionsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *templateStorages;
@property (readonly, nonatomic) NSArray *templateSectionStorages;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTemplateStorages:(id)a0 templateSectionStorages:(id)a1;

@end
