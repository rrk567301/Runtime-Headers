@class NSArray, NSString, NSMutableArray;

@interface STListData : NSObject <BSDebugDescriptionProviding, STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding> {
    NSMutableArray *_objects;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *objects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithObjects:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)diffFromData:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
