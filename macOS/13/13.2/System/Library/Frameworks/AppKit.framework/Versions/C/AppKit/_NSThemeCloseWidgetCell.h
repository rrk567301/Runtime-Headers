@interface _NSThemeCloseWidgetCell : _NSThemeWidgetCell {
    BOOL _edited;
}

- (id)accessibilityAttributeNames;
- (id)accessibilityEditedAttribute;
- (BOOL)accessibilityIsEditedAttributeSettable;
- (BOOL)isEdited;
- (id)coreUIValue;
- (int)getState:(id)a0;
- (BOOL)setEditedFlag:(BOOL)a0;

@end
