@interface CNUIEditingRules : NSObject

@property (readonly, nonatomic) BOOL allowNoteEditingOutsideOfEditMode;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAllowNoteEditingOutsideOfEditMode:(BOOL)a0;

@end
