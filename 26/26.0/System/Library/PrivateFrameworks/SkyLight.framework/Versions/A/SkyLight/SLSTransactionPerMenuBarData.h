@class NSArray;

@interface SLSTransactionPerMenuBarData : NSObject {
    BOOL _revealInterrupted;
    BOOL _reduceTransparency;
    BOOL _increasedContrast;
    BOOL _fsMenuBarAppearance;
    int _displayID;
    int _representedSpaceType;
    unsigned int _flags;
    unsigned int _activeWidLight;
    unsigned int _activeWidDark;
    unsigned int _inactiveWidLight;
    unsigned int _inactiveWidDark;
    unsigned int _availableSpace;
    unsigned int _appleLogoWidth;
    unsigned long long _spaceID;
    double _reveal;
    double _revealDuration;
    NSArray *_titleBreakOffsets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectedTitleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _auxiliarySelectedTitleBounds;
}

- (void)dealloc;

@end
