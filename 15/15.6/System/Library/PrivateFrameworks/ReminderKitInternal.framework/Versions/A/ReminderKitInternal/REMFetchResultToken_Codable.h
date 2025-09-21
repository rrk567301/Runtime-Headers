@interface REMFetchResultToken_Codable : REMFetchResultToken

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithPersistentHistoryTokens:(id)a0;

@end
