@class CPKSearchFieldEditor;

@interface CPKSearchFieldCell : NSSearchFieldCell {
    CPKSearchFieldEditor *_customEditor;
}

- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)fieldEditorForView:(id)a0;
- (id)initTextCell:(id)a0;
- (void)_privateInit;

@end
