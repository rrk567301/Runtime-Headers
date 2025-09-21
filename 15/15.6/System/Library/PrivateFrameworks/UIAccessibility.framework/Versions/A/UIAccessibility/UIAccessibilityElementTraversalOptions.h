@class NSArray;

@interface UIAccessibilityElementTraversalOptions : NSObject

@property (nonatomic) char honorsElementGrouping;
@property (nonatomic) char forSpeakScreen;
@property (nonatomic) char shouldIncludeStatusBarWindow;
@property (copy, nonatomic) id /* block */ alternateViewChildrenHandler;
@property (nonatomic) char shouldReturnScannerGroups;
@property (nonatomic) long long direction;
@property (copy, nonatomic) id /* block */ leafNodePredicate;
@property (nonatomic) char shouldOnlyIncludeElementsWithVisibleFrame;
@property (nonatomic) char shouldIncludeKeyboardObscuredElements;
@property (nonatomic) char shouldUseAllSubviews;
@property (nonatomic) char includeHiddenViews;
@property (nonatomic) char includeWindowlessViews;
@property (nonatomic) char sorted;
@property (nonatomic) char includeAncestorsOfSelfInSiblingMatch;
@property (retain, nonatomic) NSArray *allowedElementsForTraversal;
@property (nonatomic) char shouldExcludeSupplementaryViews;

+ (id)options;
+ (id)defaultVoiceOverOptions;
+ (id)defaultContinuityDisplayOptions;
+ (id)defaultFullKeyboardAccessOptions;
+ (id)defaultSpeakScreenOptions;
+ (id)defaultSwitchControlOptions;
+ (id)defaultVoiceOverOptionsHonoringGroups;
+ (id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(char)a0 honorsGroups:(char)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
