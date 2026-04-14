@class NSUUID;

@interface CCPeerToPeerMessage : NSObject <BMOPACKCodable>

@property (readonly, nonatomic) unsigned char syncReason;
@property (retain, nonatomic) NSUUID *senderDeviceUUID;
@property (readonly, nonatomic) unsigned long long protocolVersion;
@property (readonly, nonatomic) double walltime;

- (id)initFromDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithSyncReason:(unsigned char)a0 senderDeviceUUID:(id)a1 protocolVersion:(unsigned long long)a2 wallTime:(double)a3;

@end
