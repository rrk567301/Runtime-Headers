@interface CNUIEditingRules : NSObject

@property (readonly, nonatomic) BOOL allowNoteEditingOutsideOfEditMode;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithAllowNoteEditingOutsideOfEditMode:(BOOL)a0;

@end
