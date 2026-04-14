@class NSString, NSImage;

@interface PRSSlice : NSObject

@property (getter=isUnderlined) BOOL underlined;
@property BOOL stringValueFontIsLarge;
@property (retain) NSString *sliceType;
@property (retain) NSString *title;
@property (retain) NSString *stringValue;
@property (retain) NSString *stringValue2;
@property (retain) NSImage *image;
@property double floatValue;

- (void).cxx_destruct;

@end
