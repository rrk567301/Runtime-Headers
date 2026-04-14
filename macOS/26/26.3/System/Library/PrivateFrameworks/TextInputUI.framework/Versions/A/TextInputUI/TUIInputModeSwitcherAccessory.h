@class NSArray;

@interface TUIInputModeSwitcherAccessory : TUICursorAccessory <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *inputSourceIDs;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL isInputSource;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLanguages:(id)a0 selectedIndex:(long long)a1 actionHandler:(id /* block */)a2;
- (id)initWithInputSourceIDs:(id)a0 selectedIndex:(long long)a1;
- (id)additionalComponents;

@end
