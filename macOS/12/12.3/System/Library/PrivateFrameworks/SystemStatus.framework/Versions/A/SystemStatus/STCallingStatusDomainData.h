@class NSArray, NSSet, NSString, STListData;

@interface STCallingStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

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
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)diffFromData:(id)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)initWithCallDescriptorListData:(id)a0;
- (id)_initWithCallDescriptorListData:(id)a0;
- (id)_activeAudioCallDescriptors;
- (id)_ringingAudioCallDescriptors;
- (id)_videoOrCopresenceCallDescriptorsWithCallState:(unsigned long long)a0;
- (id)_activeVideoCallDescriptors;
- (id)_ringingVideoCallDescriptors;

@end
