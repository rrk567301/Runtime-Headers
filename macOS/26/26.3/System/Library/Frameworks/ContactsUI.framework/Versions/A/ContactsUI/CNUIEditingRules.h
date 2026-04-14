@interface CNUIEditingRules : NSObject

@property (readonly, nonatomic) BOOL allowNoteEditingOutsideOfEditMode;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAllowNoteEditingOutsideOfEditMode:(BOOL)a0;

@end
