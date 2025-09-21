@class NSString, MRTextEditingAttributes;

@interface MRMutableTextEditingSession : MRTextEditingSession

@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isEditing) char editing;
@property (retain, nonatomic) MRTextEditingAttributes *attributes;

- (void)setAttributes:(id)a0;
- (void)setEditing:(char)a0;
- (void)setText:(id)a0;

@end
