@class NSArray;

@interface TUIDictationAccessory : TUICursorAccessory <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *languages;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguages:(id)a0 actionHandler:(id /* block */)a1;
- (id)additionalComponents;

@end
