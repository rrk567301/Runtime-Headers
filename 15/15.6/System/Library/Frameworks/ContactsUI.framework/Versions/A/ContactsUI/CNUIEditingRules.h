@interface CNUIEditingRules : NSObject

@property (readonly, nonatomic) char allowNoteEditingOutsideOfEditMode;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithAllowNoteEditingOutsideOfEditMode:(char)a0;

@end
