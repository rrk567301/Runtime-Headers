@class NSString;

@interface MOPhotosMomentCaptionTextFieldCell : NSTextFieldCell <NSAccessibilityStaticText>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityValue;
- (BOOL)accessibilityPerformPress;

@end
