@class NSString;

@interface IATextInputActionsSessionKBMenuAppearAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long glomojiType;
@property (copy, nonatomic) NSString *originalInputMode;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (void)encodeWithCoder:(id)a0;

@end
