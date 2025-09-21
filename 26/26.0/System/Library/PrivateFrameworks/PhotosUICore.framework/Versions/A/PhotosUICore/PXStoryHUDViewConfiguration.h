@class NSString, NSColor;

@interface PXStoryHUDViewConfiguration : NSObject <PXGViewUserData>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct CGPoint { double x; double y; } textRelativePosition;
@property (nonatomic) struct CGPoint { double x; double y; } textInsets;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSColor *tintColor;
@property (nonatomic) double borderWidth;
@property (readonly, nonatomic) long long viewFloatingAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
