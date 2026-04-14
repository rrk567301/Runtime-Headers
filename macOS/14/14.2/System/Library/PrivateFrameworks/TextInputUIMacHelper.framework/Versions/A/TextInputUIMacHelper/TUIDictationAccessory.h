@class NSArray;

@interface TUIDictationAccessory : TUICursorAccessory <NSSecureCoding> {
    long long preferredAnimationStyle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *languages;
@property (nonatomic) long long animationStyle;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguages:(id)a0 actionHandler:(id /* block */)a1;
- (id)additionalComponents;
- (id)initWithLanguages:(id)a0 animationStyle:(long long)a1 actionHandler:(id /* block */)a2;
- (long long)preferredAnimationStyle;
- (void)setPreferredAnimationStyle:(long long)a0;

@end
