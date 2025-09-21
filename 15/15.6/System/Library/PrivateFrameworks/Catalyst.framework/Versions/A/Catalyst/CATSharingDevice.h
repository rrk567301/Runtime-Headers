@class NSUUID, NSString, NSDate;

@interface CATSharingDevice : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) long long RSSI;
@property (readonly, nonatomic, getter=isPaired) char paired;
@property (readonly, nonatomic) unsigned long long pairingState;
@property (readonly, nonatomic) NSDate *detectionTime;

+ (id)unlocalizedDescriptivePairingStateForPairingState:(unsigned long long)a0;

- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToDevice:(id)a0;
- (id)initWithIdentifier:(id)a0 modelIdentifier:(id)a1 RSSI:(long long)a2 paired:(char)a3 pairingState:(unsigned long long)a4 detectionTime:(id)a5;

@end
