@class NSArray;

@interface TUIInputModeSwitcherAccessory : TUICursorAccessory <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *inputSourceIDs;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) char isInputSource;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguages:(id)a0 selectedIndex:(long long)a1 actionHandler:(id /* block */)a2;
- (id)initWithInputSourceIDs:(id)a0 selectedIndex:(long long)a1;
- (id)additionalComponents;

@end
