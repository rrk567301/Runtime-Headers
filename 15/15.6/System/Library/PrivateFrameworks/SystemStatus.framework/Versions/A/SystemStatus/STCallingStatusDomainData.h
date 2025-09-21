@class NSArray, NSSet, NSString, STListData;

@interface STCallingStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) STListData *callDescriptorListData;
@property (readonly, copy, nonatomic) NSArray *callDescriptors;
@property (readonly, copy, nonatomic) NSSet *activeCallAttributions;
@property (readonly, copy, nonatomic) NSSet *ringingCallAttributions;
@property (readonly, copy, nonatomic) NSSet *activeVideoConferenceAttributions;
@property (readonly, copy, nonatomic) NSSet *ringingVideoConferenceAttributions;
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
- (id)initWithCallDescriptorListData:(id)a0;
- (id)_initWithCallDescriptorListData:(id)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)diffFromData:(id)a0;

@end
