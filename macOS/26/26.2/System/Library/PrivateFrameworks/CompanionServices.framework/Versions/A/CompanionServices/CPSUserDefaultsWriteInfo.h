@class NSString;

@interface CPSUserDefaultsWriteInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *suiteName;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id value;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
