@class NSString;

@interface _SWCollaborationOptionsPickerGroup : _SWCollaborationOptionsGroup {
    char _isUpdatingSelectionState;
}

@property (retain, nonatomic) NSString *selectedOptionIdentifier;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setOptions:(id)a0;
- (id)initWithTitle:(id)a0 identifier:(id)a1 footer:(id)a2 options:(id)a3;
- (id)_defaultSelectedOptionIdentifier;
- (id)initWithTitle:(id)a0 identifier:(id)a1 footer:(id)a2 options:(id)a3 selectedOptionIdentifierIndex:(long long)a4;

@end
