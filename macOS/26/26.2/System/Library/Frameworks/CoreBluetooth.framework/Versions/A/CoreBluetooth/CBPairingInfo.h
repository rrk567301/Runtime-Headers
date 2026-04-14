@class NSError, CBDevice, NSString;

@interface CBPairingInfo : NSObject <CUXPCCodable>

@property (retain, nonatomic) CBDevice *device;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) unsigned int flags;
@property (nonatomic) long long pairingType;
@property (copy, nonatomic) NSString *pin;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
