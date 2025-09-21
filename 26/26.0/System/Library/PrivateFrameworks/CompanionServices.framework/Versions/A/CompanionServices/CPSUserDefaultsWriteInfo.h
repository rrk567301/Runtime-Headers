@class NSString;

@interface CPSUserDefaultsWriteInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *suiteName;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id value;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
