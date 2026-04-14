@class NSString;

@interface PTRestoreDefaultSettingsRowAction : PTRowAction

@property (readonly, nonatomic) NSString *settingsKeyPath;

+ (id)action;
+ (BOOL)supportsSecureCoding;
+ (id)actionWithSettingsKeyPath:(id)a0;

- (unsigned long long)hash;
- (id /* block */)defaultHandler;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
