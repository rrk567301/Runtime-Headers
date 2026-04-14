@class NSString, NSArray;

@interface LNAutoShortcutSubstitution : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSArray *basePhraseTemplateSubstitutions;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 basePhraseTemplateSubstitutions:(id)a1;

@end
