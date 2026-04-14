@class NSString, NSMutableSet;

@interface UINSPreferences : NSPreferences {
    BOOL _hasSystemPreferencesModule;
    long long _isSmallerLargerPrefApplicable;
}

@property (class, weak) id customButtonTarget;

@property (readonly, nonatomic) float _horizontalBasePriority;
@property (retain, nonatomic) NSMutableSet *_customButtons;
@property (copy, nonatomic) NSString *helpBook;
@property (copy, nonatomic) NSString *helpAnchor;
@property (readonly, nonatomic) BOOL arePreferencesLoaded;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)windowDidBecomeKey:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (void)_updateCustomButtonTargets;
- (id)_customButtonTargetToUse;
- (void)showPreferencesPanelForOwner:(id)a0;
- (id)_createDescriptionLabelWithString:(id)a0;
- (void)stretchWrappingText:(id)a0 nicelyBasedOnSource:(id)a1;
- (void)addSpacerTo:(id)a0;
- (void)_insertFooterText:(id)a0 intoGrid:(id)a1;
- (id)_createGroupBoxForChildGrid:(id)a0 title:(id)a1 footer:(id)a2;
- (id)customButtons;
- (id)_boxWithCenteredContent:(id)a0 contentHuggingPriority:(float)a1;
- (BOOL)usesButtons;
- (void)loadPreferences;
- (void)_updatePreferenceApplicability;
- (void)_addTabForRootNode:(id)a0 title:(id)a1;
- (void)loadFromApplicationSettingsBundle;
- (void)_addTouchAlternativesPreferencesTab;
- (void)_addControllerPreferencesTab;
- (void)_addSystemPreferencesTabIfNeeded;
- (void)_updateConstrainedWidth:(double)a0;
- (void)_addUINSPreferenceNamed:(id)a0 owner:(id)a1;
- (void)_startObservingDisplayConfigurationChangeNotifications;
- (void)_stopObservingDisplayConfigurationChangeNotifications;
- (void)_displayConfigurationChangedNotification:(id)a0;
- (id)_viewForRootNode:(id)a0 module:(id)a1;
- (id)_viewWithCenteredContent:(id)a0 inset:(double)a1;
- (id)_scrollViewWithContent:(id)a0 maxHeight:(double)a1 adjustsTitlebarSeparator:(BOOL)a2;
- (id)_viewWithContent:(id)a0 insets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)_gridViewWithIdentifier:(id)a0;
- (id)_fieldForTitleValueNode:(id)a0;
- (id)_controlForToggleSwitchNode:(id)a0 valueKeyPath:(id)a1 bindOptions:(id)a2 title:(id)a3 optionalFooter:(id)a4 module:(id)a5 nextNode:(id)a6;
- (id)_sliderForNode:(id)a0;
- (id)_popUpButtonForNode:(id)a0 withValueTransformer:(id)a1;
- (void)_insertRadioGroupForNode:(id)a0 label:(id)a1 intoGrid:(id)a2 optionalFooter:(id)a3 module:(id)a4 nextNode:(id)a5;
- (id)_buttonForCustomButtonNode:(id)a0 title:(id)a1 optionalFooter:(id)a2 module:(id)a3 nextNode:(id)a4;
- (void)_insertFooterText:(id)a0 fullWidthIntoGrid:(id)a1;
- (id)_addOptionalDescriptionOrFooterForNode:(id)a0 labelInset:(double)a1 optionalFooter:(id)a2 module:(id)a3 nextNode:(id)a4 itemView:(id)a5;
- (BOOL)nodeIsStartOfGroup:(id)a0;

@end
