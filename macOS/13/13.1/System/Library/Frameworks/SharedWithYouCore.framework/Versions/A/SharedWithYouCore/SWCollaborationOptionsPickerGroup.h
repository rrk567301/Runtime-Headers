@class NSString;

@interface SWCollaborationOptionsPickerGroup : SWCollaborationOptionsGroup {
    BOOL _isUpdatingSelectionState;
}

@property (retain, nonatomic) NSString *selectedOptionIdentifier;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setOptions:(id)a0;
- (id)initWithIdentifier:(id)a0 options:(id)a1;
- (id)_defaultSelectedOptionIdentifier;

@end
