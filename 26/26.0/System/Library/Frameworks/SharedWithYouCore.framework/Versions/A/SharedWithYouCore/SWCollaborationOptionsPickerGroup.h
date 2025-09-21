@class NSString;

@interface SWCollaborationOptionsPickerGroup : SWCollaborationOptionsGroup {
    BOOL _isUpdatingSelectionState;
}

@property (retain, nonatomic) NSString *selectedOptionIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setOptions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_defaultSelectedOptionIdentifier;
- (id)initWithIdentifier:(id)a0 options:(id)a1;

@end
