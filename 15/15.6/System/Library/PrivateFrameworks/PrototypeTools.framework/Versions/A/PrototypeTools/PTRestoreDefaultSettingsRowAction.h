@class NSString;

@interface PTRestoreDefaultSettingsRowAction : PTRowAction

@property (readonly, nonatomic) NSString *settingsKeyPath;

+ (char)supportsSecureCoding;
+ (id)action;
+ (id)actionWithSettingsKeyPath:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)defaultHandler;

@end
