@class SCRCThreadKey, SCRVisualsManager, SCRCTargetSelectorTimer, NSMutableOrderedSet, SCRCUserDefaults, NSString, SCRElement;

@interface SCRElementRotorManager : NSObject

@property (readonly, nonatomic) NSMutableOrderedSet *_activeRotors;
@property (readonly, nonatomic) SCRCTargetSelectorTimer *_hideVisualsTimer;
@property (readonly, nonatomic) SCRCThreadKey *_threadKey;
@property (readonly, nonatomic) SCRCUserDefaults *_userDefaults;
@property (readonly, nonatomic) SCRVisualsManager *_visualsManager;
@property (retain, nonatomic) NSString *currentRotorType;
@property (retain, nonatomic) SCRElement *currentElement;
@property (readonly, nonatomic) char isCurrentChooserCustom;
@property (readonly, copy, nonatomic) NSString *currentChooserCustomName;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)_currentTypeAndElementSupportSelection;
- (void)_delayedHideVisualsCallback;
- (long long)_indexOfCurrentRotor;
- (long long)_indexOfNextRotorInDirection:(long long)a0 includeOnlyVisibleGuideRotors:(char)a1;
- (id)_moveToNextRotor:(long long)a0 includeOnlyVisibleGuideRotors:(char)a1;
- (void)_updateRotors;
- (id)activeRotors:(char)a0;
- (void)addRotorForType:(id)a0;
- (char)advanceRotorInDirection:(long long)a0 onlyVisible:(char)a1 request:(id)a2 showVisuals:(char)a3 autoHideVisuals:(char)a4;
- (id)currentRotorTypeForGuide;
- (void)delayHideVisuals;
- (void)hideVisuals;
- (id)initWithUserDefaults:(id)a0 visualsManager:(id)a1;
- (char)isRotorShownInGuides:(id)a0;
- (void)removeRotorForType:(id)a0;
- (id)rotorIdentifierForAXRotorType:(long long)a0;
- (id)rotorTypeForGuideInMovementDirection:(long long)a0;
- (id)rotorTypeForSearchKey:(long long)a0;
- (long long)searchKeyForRotorType:(id)a0;
- (id)searchKeyToWebRotorLookup;
- (id)titleForRotorType:(id)a0;
- (void)updateQuickNavOverridesSelection;

@end
