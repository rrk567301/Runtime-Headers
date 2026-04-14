@class NSData, NSNumber;

@interface CHIPOperationalCredentialsClusterAddNOCParams : NSObject

@property (retain, nonatomic) NSData *nocValue;
@property (retain, nonatomic) NSData *icacValue;
@property (retain, nonatomic) NSData *ipkValue;
@property (retain, nonatomic) NSNumber *caseAdminNode;
@property (retain, nonatomic) NSNumber *adminVendorId;

- (id)init;
- (void).cxx_destruct;

@end
