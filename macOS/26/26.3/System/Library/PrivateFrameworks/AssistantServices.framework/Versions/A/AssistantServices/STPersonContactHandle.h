@class NSString;

@interface STPersonContactHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long type;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPersonContactHandle:(id)a0;

@end
