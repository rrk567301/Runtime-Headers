@class NSString;

@interface SUCoreConnectVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *selectorString;

- (id)initWithSelector:(SEL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
