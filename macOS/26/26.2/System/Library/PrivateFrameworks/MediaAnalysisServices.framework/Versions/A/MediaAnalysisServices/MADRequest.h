@class NSArray, NSError;

@interface MADRequest : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) unsigned long long targetResolution;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSError *error;

- (id)initWithCoder:(id)a0;
- (void)setError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)setResults:(id)a0;

@end
