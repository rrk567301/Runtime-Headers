@class CRKClassKitCurrentUserProvider, NSNumber, CRKASMSuspendableRosterProvider;

@interface CRKASMClassicAdHocSwitchReadingRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) CRKASMSuspendableRosterProvider *suspendableProvider;
@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (retain, nonatomic) NSNumber *previousValueOfAdHocModeEnabled;
@property (nonatomic) char overridingIsPopulatedToYES;

+ (id)currentUserProviderObservedKeyPaths;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)isPopulated;
- (void)currentUserDidChange;
- (id)initWithClassKitFacade:(id)a0 rosterProviderGenerator:(id /* block */)a1;
- (char)isClassicAdHocModeEnabledForUser:(id)a0;
- (void)overrideIsPopulatedToYES;
- (void)processAdHocModeEnabled:(char)a0;
- (void)startObservingCurrentUserProvider;
- (void)stopObservingCurrentUserProvider;

@end
