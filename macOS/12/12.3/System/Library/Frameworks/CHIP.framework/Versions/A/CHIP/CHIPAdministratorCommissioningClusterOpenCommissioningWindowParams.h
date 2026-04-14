@class NSNumber, NSData;

@interface CHIPAdministratorCommissioningClusterOpenCommissioningWindowParams : NSObject

@property (retain, nonatomic) NSNumber *commissioningTimeout;
@property (retain, nonatomic) NSData *pakeVerifier;
@property (retain, nonatomic) NSNumber *discriminator;
@property (retain, nonatomic) NSNumber *iterations;
@property (retain, nonatomic) NSData *salt;
@property (retain, nonatomic) NSNumber *passcodeID;

- (id)init;
- (void).cxx_destruct;

@end
