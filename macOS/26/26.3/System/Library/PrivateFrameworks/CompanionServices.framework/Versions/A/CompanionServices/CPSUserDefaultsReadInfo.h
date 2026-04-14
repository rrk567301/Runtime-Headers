@class NSString, NSArray;

@interface CPSUserDefaultsReadInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *suiteName;
@property (retain, nonatomic) NSArray *keys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
