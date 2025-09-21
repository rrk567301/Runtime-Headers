@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *persistentHistoryTokens;

+ (id)fetchResultTokenFromDataRepresentation:(id)a0 error:(id *)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (id)initWithPersistentHistoryTokens:(id)a0;

@end
