@class NSString, NSArray;

@interface SUIBSessionRetrievedPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) unsigned long long outcome;
@property (readonly, copy, nonatomic) NSArray *messages;
@property (readonly, copy, nonatomic) NSString *errorDescription;

- (id)initWithBuilder:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
