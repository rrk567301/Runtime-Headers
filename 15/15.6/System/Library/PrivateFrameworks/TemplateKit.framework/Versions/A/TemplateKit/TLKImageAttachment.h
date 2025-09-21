@interface TLKImageAttachment : NSTextAttachment

@property (nonatomic) struct CGSize { double width; double height; } size;
@property char isPlaceholder;

@end
