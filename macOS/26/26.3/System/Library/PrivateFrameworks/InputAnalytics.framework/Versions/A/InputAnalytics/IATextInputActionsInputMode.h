@class NSString;

@interface IATextInputActionsInputMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *keyboardVariant;
@property (copy, nonatomic) NSString *keyboardLayout;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *inputModeIdentifier;

- (id)initFromDictionary:(id)a0;
- (BOOL)isEmpty;
- (id)description;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)inputModeUniqueString;
- (id)initWithLanguage:(id)a0 region:(id)a1 keyboardVariant:(id)a2 keyboardLayout:(id)a3 keyboardType:(id)a4 inputModeIdentifier:(id)a5;

@end
