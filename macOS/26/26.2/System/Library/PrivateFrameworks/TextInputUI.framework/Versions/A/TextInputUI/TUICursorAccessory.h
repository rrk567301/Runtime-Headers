@class NSString;

@interface TUICursorAccessory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ actionHandler;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)additionalComponents;
- (id)initWithIdentifier:(id)a0 actionHandler:(id /* block */)a1;

@end
