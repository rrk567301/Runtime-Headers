@class NSArray, NSString;

@interface MPModelLibrarySearchRequest : MPModelLibraryRequest

@property (copy, nonatomic) NSArray *scopes;
@property (nonatomic) long long maximumResultsPerScope;
@property (copy, nonatomic) NSString *searchString;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
