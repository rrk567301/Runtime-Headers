@class NSString, BSSettings, STListDataDiff, STDictionaryDataDiff;

@interface STBackgroundActivitiesStatusDomainDataDiff : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDiff> {
    BSSettings *_changes;
    STListDataDiff *_backgroundActivitiesAttributionListDataDiff;
    STDictionaryDataDiff *_visualDescriptorsByIdentifierDictionaryDataDiff;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isEmpty) char empty;

+ (id)diffFromData:(id)a0 toData:(id)a1;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)applyToMutableData:(id)a0;
- (id)dataByApplyingToData:(id)a0;
- (id)diffByApplyingDiff:(id)a0;
- (id)initWithChanges:(id)a0 backgroundActivitiesAttributionListDataDiff:(id)a1 visualDescriptorsByIdentifierDictionaryDataDiff:(id)a2;
- (char)isOrthogonalToDiff:(id)a0;

@end
