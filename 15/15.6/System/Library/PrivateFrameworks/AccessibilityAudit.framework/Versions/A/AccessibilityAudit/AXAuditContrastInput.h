@class NSData, NSString;

@interface AXAuditContrastInput : NSObject

@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame;
@property (nonatomic) double displayScaleFactor;
@property (nonatomic) char enhanced;
@property (retain, nonatomic) NSString *foregroundHexColorValue;
@property (retain, nonatomic) NSString *backgroundHexColorValue;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSString *identifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
