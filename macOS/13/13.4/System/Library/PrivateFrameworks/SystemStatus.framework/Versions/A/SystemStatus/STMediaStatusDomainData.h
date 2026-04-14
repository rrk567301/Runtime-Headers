@class NSArray, NSSet, STActivityAttributionCatalog, NSString, STListData;

@interface STMediaStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STActivityAttributionCatalog *attributionCatalog;
@property (readonly, copy, nonatomic) STListData *cameraAttributionListData;
@property (readonly, copy, nonatomic) NSArray *cameraAttributions;
@property (readonly, copy, nonatomic) NSArray *audioRecordingAttributionList;
@property (readonly, copy, nonatomic) NSArray *mutedAudioRecordingAttributionList;
@property (readonly, copy, nonatomic) NSArray *cameraCaptureAttributionList;
@property (readonly, copy, nonatomic) NSSet *audioRecordingAttributions;
@property (readonly, copy, nonatomic) NSSet *mutedAudioRecordingAttributions;
@property (readonly, copy, nonatomic) NSSet *cameraCaptureAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)_initWithAttributionCatalog:(id)a0 cameraAttributionListData:(id)a1;
- (id)camerasInUseMatchingAttribution:(id)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)diffFromData:(id)a0;
- (id)initWithAttributionCatalog:(id)a0 cameraAttributionListData:(id)a1;

@end
