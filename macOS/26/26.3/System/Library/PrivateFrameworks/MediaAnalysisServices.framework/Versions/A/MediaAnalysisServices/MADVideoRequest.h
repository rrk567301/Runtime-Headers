@class NSArray, NSError;

@interface MADVideoRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setResults:(id)a0;
- (void)setError:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
