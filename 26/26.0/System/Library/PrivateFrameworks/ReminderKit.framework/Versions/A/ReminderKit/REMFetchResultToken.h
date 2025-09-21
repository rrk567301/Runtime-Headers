@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *persistentHistoryTokens;

+ (id)fetchResultTokenFromDataRepresentation:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (id)initWithPersistentHistoryTokens:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
