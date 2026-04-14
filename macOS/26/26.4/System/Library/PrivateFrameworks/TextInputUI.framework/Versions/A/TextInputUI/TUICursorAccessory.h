@class NSString;

@interface TUICursorAccessory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ actionHandler;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)additionalComponents;
- (id)initWithIdentifier:(id)a0 actionHandler:(id /* block */)a1;

@end
