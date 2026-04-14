@class NSArray, NSError;

@interface MADRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setResults:(id)a0;
- (void)setError:(id)a0;

@end
