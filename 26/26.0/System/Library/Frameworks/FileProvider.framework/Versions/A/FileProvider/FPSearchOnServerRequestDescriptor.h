@class NSString;

@interface FPSearchOnServerRequestDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) long long desiredNumberOfResults;
@property (readonly, nonatomic) long long maximumNumberOfResultsPerPage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 desiredNumberOfResults:(long long)a1 maximumNumberOfResultsPerPage:(long long)a2;

@end
