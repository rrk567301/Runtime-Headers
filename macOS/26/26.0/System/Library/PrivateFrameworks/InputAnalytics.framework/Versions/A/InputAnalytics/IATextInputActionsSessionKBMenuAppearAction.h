@class NSString;

@interface IATextInputActionsSessionKBMenuAppearAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long glomojiType;
@property (copy, nonatomic) NSString *originalInputMode;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (long long)inputActionCount;
- (void).cxx_destruct;

@end
