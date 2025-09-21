@class NSArray, NSDictionary, NSString, NSMutableDictionary;

@interface STDictionaryData : NSObject <BSDebugDescriptionProviding, STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding> {
    NSMutableDictionary *_objectsAndKeys;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, copy, nonatomic) NSDictionary *objectsAndKeys;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) char isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectsAndKeys:(id)a0;
- (id)objectForKey:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)dataByApplyingDiff:(id)a0;
- (id)diffFromData:(id)a0;
- (char)validateObjectsAndKeysWithValidObjectClasses:(id)a0 keyClasses:(id)a1;

@end
