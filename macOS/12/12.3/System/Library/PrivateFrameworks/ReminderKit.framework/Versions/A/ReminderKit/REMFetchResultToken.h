@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *persistentHistoryTokens;

+ (id)fetchResultTokenFromDataRepresentation:(id)a0 error:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentationWithError:(id *)a0;
- (id)initWithPersistentHistoryTokens:(id)a0;

@end
