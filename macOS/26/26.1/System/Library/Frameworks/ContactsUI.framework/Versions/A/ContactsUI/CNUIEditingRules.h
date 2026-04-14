@interface CNUIEditingRules : NSObject

@property (readonly, nonatomic) BOOL allowNoteEditingOutsideOfEditMode;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAllowNoteEditingOutsideOfEditMode:(BOOL)a0;

@end
