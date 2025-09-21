@class NSData, NSString;

@interface STSTapToProvisionResult : NSObject

@property (readonly, copy, nonatomic) NSData *provisionDataBlob;
@property (readonly, copy, nonatomic) NSData *casdCertificate;
@property (readonly, nonatomic) NSString *networkName;

- (void).cxx_destruct;
- (id)initWithProvisionDataBlob:(id)a0 casdCertificate:(id)a1;

@end
