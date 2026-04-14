@class NSData, CCDevice;

@interface CCPeerToPeerMessage : NSObject <CCPeerToPeerMessageOPACKCodable>

@property (readonly, nonatomic) CCDevice *device;
@property (readonly, nonatomic) unsigned long long protocolVersion;
@property (readonly, nonatomic) double walltime;
@property (retain, nonatomic) NSData *peerPublicKey;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;
- (id)initWithDevice:(id)a0 protocolVersion:(unsigned long long)a1 wallTime:(double)a2 peerPublicKey:(id)a3;

@end
