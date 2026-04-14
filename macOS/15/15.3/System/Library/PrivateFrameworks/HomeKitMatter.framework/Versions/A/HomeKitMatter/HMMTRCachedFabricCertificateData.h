@class NSNumber, NSData;

@interface HMMTRCachedFabricCertificateData : NSObject

@property (readonly, copy) NSNumber *fabricID;
@property (readonly, copy) NSData *rootCert;
@property (readonly, copy) NSData *operationalCert;
@property (readonly, copy) NSNumber *ownerNode;
@property (readonly, copy) NSData *ipk;

- (void).cxx_destruct;
- (id)initWithFabricID:(id)a0 rootCert:(id)a1 operationalCert:(id)a2 ownerNode:(id)a3 ipk:(id)a4;

@end
