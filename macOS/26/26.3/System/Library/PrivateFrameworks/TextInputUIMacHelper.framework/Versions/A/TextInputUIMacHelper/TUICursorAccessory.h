@class NSString;

@interface TUICursorAccessory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ actionHandler;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)additionalComponents;
- (id)initWithIdentifier:(id)a0 actionHandler:(id /* block */)a1;

@end
