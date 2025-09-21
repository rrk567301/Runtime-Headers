@class NSString, NSDictionary, NSSet, NSArray;

@interface ASCLockupBatchRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, nonatomic) char enableAppDistribution;
@property (readonly, copy, nonatomic) NSDictionary *mediaQueryParams;
@property (readonly, copy, nonatomic) NSString *platformOverride;
@property (readonly, copy, nonatomic) NSSet *ids;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSArray *requests;

+ (id)lockupBatchRequestsFromRequests:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithIDs:(id)a0 kind:(id)a1 context:(id)a2 clientID:(id)a3 enableAppDistribution:(char)a4 mediaQueryParams:(id)a5 platformOverride:(id)a6;
- (id)initWithIDs:(id)a0 kind:(id)a1 context:(id)a2;
- (id)lockupBatchRequestWithIDs:(id)a0;

@end
