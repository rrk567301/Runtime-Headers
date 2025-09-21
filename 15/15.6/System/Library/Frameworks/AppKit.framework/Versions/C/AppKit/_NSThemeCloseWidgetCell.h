@interface _NSThemeCloseWidgetCell : _NSThemeWidgetCell {
    char _edited;
}

- (id)accessibilityAttributeNames;
- (id)accessibilityEditedAttribute;
- (char)accessibilityIsEditedAttributeSettable;
- (id)coreUIValue;
- (int)getState:(id)a0;
- (char)isEdited;
- (char)setEditedFlag:(char)a0;

@end
