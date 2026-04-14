@class NSArray, NSError;

@interface MADTextTokenizationResult : MADTextResult

@property (readonly, nonatomic) NSArray *tokenIDs;
@property (readonly, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTokenIDs:(id)a0 error:(id)a1;

@end
