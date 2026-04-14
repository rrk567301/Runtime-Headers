@class NSUUID, NSString, NSDictionary, NSDate;

@interface CATSharingDevice : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) long long RSSI;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) unsigned long long pairingState;
@property (readonly, nonatomic) NSDate *detectionTime;
@property (copy, nonatomic) NSDictionary *context;

+ (id)unlocalizedDescriptivePairingStateForPairingState:(unsigned long long)a0;

- (id)debugDescription;
- (BOOL)isEqualToDevice:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 modelIdentifier:(id)a1 RSSI:(long long)a2 paired:(BOOL)a3 pairingState:(unsigned long long)a4 detectionTime:(id)a5;

@end
