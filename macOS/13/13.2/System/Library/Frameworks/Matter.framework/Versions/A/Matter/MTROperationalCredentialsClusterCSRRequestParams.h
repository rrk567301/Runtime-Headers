@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterCSRRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *csrNonce;
@property (copy, nonatomic) NSNumber *isForUpdateNOC;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
