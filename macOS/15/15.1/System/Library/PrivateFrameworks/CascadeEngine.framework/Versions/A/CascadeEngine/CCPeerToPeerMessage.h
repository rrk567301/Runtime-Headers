@class CCSet, CCDevice, NSData;

@interface CCPeerToPeerMessage : NSObject <CCPeerToPeerMessageOPACKCodable>

@property (readonly, nonatomic) CCSet *set;
@property (readonly, nonatomic) CCDevice *device;
@property (readonly, nonatomic) unsigned long long protocolVersion;
@property (readonly, nonatomic) double walltime;
@property (retain, nonatomic) NSData *peerPublicKey;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;
- (id)initWithSet:(id)a0 device:(id)a1 protocolVersion:(unsigned long long)a2 wallTime:(double)a3 peerPublicKey:(id)a4;

@end
