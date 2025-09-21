@class _FEDebugLogStack, NSArray, NSString, NSHashTable, NSMapTable, _FEFocusSystem, NSMutableArray;
@protocol _FEFocusEnvironmentPreferenceEnumerationContextDelegate, _FEFocusEnvironment;

@interface _FEFocusEnvironmentPreferenceEnumerationContext : NSObject <_FEFocusEnvironmentPreferenceEnumerationContext> {
    _FEFocusSystem *_focusSystem;
    id<_FEFocusEnvironment> _preferredSubtree;
    NSMutableArray *_visitedEnvironmentStack;
    id<_FEFocusEnvironment> _lastPrimaryPreferredEnvironment;
    NSArray *_cachedPreferredEnvironments;
    NSHashTable *_allVisitedEnvironments;
    char _hasResolvedPreferredFocusEnvironments;
    char _hasNeverPoppedInPreferredSubtree;
    id<_FEFocusEnvironment> _preferredSubtreeEntryPoint;
    NSMapTable *_preferredEnvironmentsMap;
}

@property (weak, nonatomic) id<_FEFocusEnvironmentPreferenceEnumerationContextDelegate> delegate;
@property (retain, nonatomic) _FEDebugLogStack *debugStack;
@property (readonly, nonatomic, getter=isInPreferredSubtree) char inPreferredSubtree;
@property (readonly, nonatomic) id<_FEFocusEnvironment> environment;
@property (readonly, nonatomic) char isPrimaryPreference;
@property (readonly, nonatomic) char isLeafPreference;
@property (readonly, nonatomic, getter=isPreferredByItself) char preferredByItself;
@property (readonly, nonatomic) char prefersNothingFocused;
@property (readonly, nonatomic) id<_FEFocusEnvironment> preferringEnvironment;
@property (readonly, nonatomic) NSArray *preferredEnvironments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_inferPreferencesForEnvironment:(id)a0;
- (void)_invalidatePreferredEnvironments;
- (char)_isAllowedToPreferEnvironment:(id)a0;
- (void)_reportInferredPreferredFocusEnvironment:(id)a0;
- (void)_resolvePreferredFocusEnvironments;
- (id)_startLogging;
- (void)_stopLogging;
- (id)initWithFocusEnvironment:(id)a0 enumerationMode:(long long)a1;
- (void)popEnvironment;
- (void)pushEnvironment:(id)a0;

@end
