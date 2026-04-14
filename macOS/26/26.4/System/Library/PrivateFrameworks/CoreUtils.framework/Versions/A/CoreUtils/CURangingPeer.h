@class NSData, NSString;

@interface CURangingPeer : NSObject

@property (copy, nonatomic) NSData *deviceAddress;
@property (copy, nonatomic) NSData *deviceIRK;
@property (copy, nonatomic) NSString *deviceModel;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
