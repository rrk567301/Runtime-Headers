@interface AMLevelIndicator : NSLevelIndicator

+ (Class)cellClass;

- (BOOL)isEditable;
- (void)awakeFromNib;

@end
