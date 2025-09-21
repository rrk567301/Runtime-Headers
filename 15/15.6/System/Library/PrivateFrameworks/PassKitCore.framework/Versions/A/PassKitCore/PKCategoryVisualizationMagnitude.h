@class NSString;

@interface PKCategoryVisualizationMagnitude : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *passUniqueIdentifier;
@property (nonatomic) long long bucket;
@property (nonatomic) double magnitude;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
