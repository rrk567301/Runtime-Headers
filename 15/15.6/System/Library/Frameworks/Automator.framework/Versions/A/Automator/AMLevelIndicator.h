@interface AMLevelIndicator : NSLevelIndicator

+ (Class)cellClass;

- (void)awakeFromNib;
- (char)isEditable;

@end
