@class NSObject, NSUserInterfaceCompressionOptions, _NSAcceleratorButtonHelper, NSMutableArray, NSColor;
@protocol NSControlStateContentStyle;

@interface _NSButtonCellAux : NSObject {
    _NSAcceleratorButtonHelper *_acceleratorHelper;
    double _doubleValue;
    long long _maxAcceleratorLevel;
    double _acceleratorClickTimestamp;
    NSUserInterfaceCompressionOptions *_compressibleOptions;
    unsigned long long _modelImagePosition;
    long long _toolbarAppearance;
    struct { unsigned char exceededInitialValue : 1; unsigned char springLoaded : 1; unsigned char springLoadingEmphasized : 1; unsigned char animationsAllowed : 1; unsigned char showsDisclosureChevron : 1; unsigned char guarded : 1; unsigned char hasDestructiveAction : 1; unsigned char usesCautionaryAppearanceWhenActionIsDestructive : 1; unsigned char alwaysShowsStateWithEffects : 1; unsigned char alwaysShowsHighlightWithEffects : 1; unsigned int _reserved : 22; } _flags;
}

@property (copy) NSColor *bezelTintColor;
@property (copy) NSColor *contentTintColor;
@property (retain) NSMutableArray *animatingOutImageViews;
@property (retain) NSMutableArray *animatingOutTextFields;
@property double minimumPressDuration;
@property (retain) NSObject<NSControlStateContentStyle> *controlStateContentStyleOverride;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
