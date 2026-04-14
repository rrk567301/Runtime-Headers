@class NSData, NSNumber;
@protocol MTRKeypair;

@interface MTRDeviceControllerStartupParams : NSObject

@property (copy, nonatomic) NSData *operationalCertificate;
@property (readonly, copy, nonatomic) id<MTRKeypair> nocSigner;
@property (readonly, nonatomic) unsigned long long fabricId;
@property (readonly, copy, nonatomic) NSData *ipk;
@property (copy, nonatomic) NSNumber *vendorId;
@property (copy, nonatomic) NSNumber *nodeId;
@property (copy, nonatomic) NSData *rootCertificate;
@property (copy, nonatomic) NSData *intermediateCertificate;
@property (retain, nonatomic) id<MTRKeypair> operationalKeypair;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (id)initWithSigningKeypair:(id)a0 fabricId:(unsigned long long)a1 ipk:(id)a2;
- (id)initWithOperationalKeypair:(id)a0 operationalCertificate:(id)a1 intermediateCertificate:(id)a2 rootCertificate:(id)a3 ipk:(id)a4;

@end
