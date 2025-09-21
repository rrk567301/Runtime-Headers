@class NSString;

@interface TUICursorAccessory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ actionHandler;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)additionalComponents;
- (id)initWithIdentifier:(id)a0 actionHandler:(id /* block */)a1;

@end
