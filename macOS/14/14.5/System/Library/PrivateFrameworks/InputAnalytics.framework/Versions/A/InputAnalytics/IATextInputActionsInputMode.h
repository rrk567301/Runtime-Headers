@class NSString;

@interface IATextInputActionsInputMode : NSObject

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *keyboardVariant;
@property (copy, nonatomic) NSString *keyboardLayout;
@property (copy, nonatomic) NSString *keyboardType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)inputModeUniqueString;
- (id)initWithLanguage:(id)a0 region:(id)a1 keyboardVariant:(id)a2 keyboardLayout:(id)a3 keyboardType:(id)a4;

@end
