@class NSString;

@interface SWCollaborationOptionsPickerGroup : SWCollaborationOptionsGroup {
    char _isUpdatingSelectionState;
}

@property (retain, nonatomic) NSString *selectedOptionIdentifier;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setOptions:(id)a0;
- (id)_defaultSelectedOptionIdentifier;
- (id)initWithIdentifier:(id)a0 options:(id)a1;

@end
