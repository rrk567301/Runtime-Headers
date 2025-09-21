@class NSData, NSString;

@interface LACDTOMutableSensorTrustState : NSObject <LACDTOSensorTrustState>

@property (retain, nonatomic) NSData *installedSensorID;
@property (retain, nonatomic) NSData *trustedSensorID;
@property (readonly, nonatomic) char isDisapproved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullInstance;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_containsDisapprovedSensorIDFlag:(id)a0;
- (id)_disapprovedSensorIDFlag;
- (void)disapprove;
- (id)initWithTrustState:(id)a0;

@end
