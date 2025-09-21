@class NSArray, STListData, NSString;

@interface STLocationStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) STListData *locationAttributionListData;
@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, nonatomic) unsigned long long activeDisplayModes;
@property (readonly, copy, nonatomic) NSArray *locationAttributions;
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
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)_initWithLocationAttributionListData:(id)a0 activeDisplayModes:(unsigned long long)a1;
- (id)dataByApplyingDiff:(id)a0;
- (id)diffFromData:(id)a0;
- (id)initWithLocationAttributionListData:(id)a0 activeDisplayModes:(unsigned long long)a1;

@end
