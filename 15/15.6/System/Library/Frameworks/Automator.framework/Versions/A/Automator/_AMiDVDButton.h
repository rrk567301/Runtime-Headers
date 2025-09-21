@class NSString, _AMiDVDMenu;

@interface _AMiDVDButton : _AMiDVDItem

@property (copy) NSString *buttonShapeName;
@property (readonly) int buttonType;
@property (copy) NSString *customAsset;
@property (copy) NSString *fontColor;
@property (copy) NSString *fontDropShadow;
@property char fontDropShadowEnabled;
@property (copy) NSString *fontName;
@property double fontSize;
@property long long horizontalOffset;
@property (readonly) char isBack;
@property (readonly) char isFolder;
@property (readonly) char isForward;
@property char isMotionButton;
@property (readonly) char isMovie;
@property (readonly) char isSlideshow;
@property (copy) NSString *label;
@property int labelAlignment;
@property int labelPosition;
@property (copy) NSString *name;
@property (readonly, copy) _AMiDVDMenu *parent;
@property double scalingFactor;
@property char selectionState;
@property (readonly, copy) NSString *targetFolder;
@property (readonly, copy) NSString *targetMovie;
@property (readonly, copy) NSString *targetSlideshow;
@property int transitionDirection;
@property (readonly) double transitionDuration;
@property int transitionType;
@property long long verticalOffset;

@end
