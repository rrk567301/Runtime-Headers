@class NSString, NSDictionary;

@interface WFContextualActionParameter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSDictionary *metadata;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 displayString:(id)a1 metadata:(id)a2;

@end
