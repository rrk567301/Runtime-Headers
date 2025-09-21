@class NSString, NSArray, NSDictionary;

@interface _SFLList : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property unsigned long long seed;
@property (readonly) NSArray *items;
@property (readonly) NSDictionary *properties;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 items:(id)a1 properties:(id)a2;

@end
