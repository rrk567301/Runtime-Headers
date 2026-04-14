@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterAddNOCParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *nocValue;
@property (copy, nonatomic) NSData *icacValue;
@property (copy, nonatomic) NSData *ipkValue;
@property (copy, nonatomic) NSNumber *caseAdminSubject;
@property (copy, nonatomic) NSNumber *adminVendorId;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
