@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *persistentHistoryTokens;

+ (id)fetchResultTokenFromDataRepresentation:(id)a0 error:(id *)a1;

- (id)initWithPersistentHistoryTokens:(id)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
