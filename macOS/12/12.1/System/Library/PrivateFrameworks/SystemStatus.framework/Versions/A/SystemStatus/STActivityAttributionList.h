@class NSArray, STListData, NSString;

@interface STActivityAttributionList : NSObject <STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STListData *listData;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithListData:(id)a0;
- (id)_initWithListData:(id)a0;
- (id)initWithAttributionList:(id)a0;
- (id)diffFromData:(id)a0;
- (id)dataByApplyingDiff:(id)a0;
- (void)enumerateAttributionsUsingBlock:(id /* block */)a0;

@end
