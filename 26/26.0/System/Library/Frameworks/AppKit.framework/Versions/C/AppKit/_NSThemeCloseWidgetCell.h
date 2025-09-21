@interface _NSThemeCloseWidgetCell : _NSThemeWidgetCell {
    BOOL _edited;
}

@property (readonly, getter=isEdited) BOOL edited;

- (id)accessibilityAttributeNames;
- (id)accessibilityEditedAttribute;
- (BOOL)accessibilityIsEditedAttributeSettable;
- (BOOL)setEditedFlag:(BOOL)a0;

@end
