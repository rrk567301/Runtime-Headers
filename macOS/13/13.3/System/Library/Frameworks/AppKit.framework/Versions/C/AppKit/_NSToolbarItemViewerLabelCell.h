@interface _NSToolbarItemViewerLabelCell : NSTextFieldCell

@property (class, readonly, retain) _NSToolbarItemViewerLabelCell *_sharedTextCell;

@property BOOL showingRollover;

- (id)_controlContentStyleInView:(id)a0;
- (long long)_interiorContentStateInView:(id)a0;
- (long long)_interiorContentValueInView:(id)a0;
- (BOOL)_shouldUseStyledTextInView:(id)a0;
- (int)_vibrancyBlendModeForControlView:(id)a0;

@end
