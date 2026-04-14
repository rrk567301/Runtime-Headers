@class NSView, EMFEmojiLocaleData, EMFEmojiPreferences, CPKWindow, NSDictionary, CPKPopoverController, CPKDataProvider, NSWindow;
@protocol CPKCharacterEntity;

@interface CPKPrivateStorage : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positioningRect;
@property NSView *positioningView;
@property unsigned long long preferredEdge;
@property (retain) id globalEventMonitor;
@property (retain) id localEventMonitor;
@property BOOL needsRebuildView;
@property BOOL settingDataSource;
@property BOOL displayingPopover;
@property BOOL skipOpeningAnimation;
@property BOOL displayAsWindow;
@property struct CGPoint { double x; double y; } displayAsWindowLoc;
@property BOOL showingLargeWindow;
@property NSWindow *alternateLargeWindow;
@property NSWindow *lastKeyWindow;
@property id lastActionObject;
@property BOOL lastTargetValidation;
@property struct _NSRange { unsigned long long location; unsigned long long length; } lastSelectionOnTarget;
@property (retain) NSDictionary *selectionAttributeForTextView;
@property (retain) id<CPKCharacterEntity> lastSelectedEntity;
@property (retain) CPKWindow *detachingWindow;
@property (retain) CPKWindow *detachedWindow;
@property long long detachedWindowLevel;
@property (retain) CPKPopoverController *tempRetainer;
@property (retain) CPKDataProvider *delayedSettingProvider;
@property (retain) EMFEmojiPreferences *emojiPreference;
@property (retain) EMFEmojiLocaleData *emojiLocaleData;
@property BOOL showEmojiOnly;

- (void)dealloc;

@end
