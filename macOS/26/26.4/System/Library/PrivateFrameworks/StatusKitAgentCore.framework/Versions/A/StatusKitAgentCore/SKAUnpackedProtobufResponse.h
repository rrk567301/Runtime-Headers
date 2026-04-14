@class NSArray, PersistentPayloadUpdateResponse;

@interface SKAUnpackedProtobufResponse : NSObject

@property (readonly, nonatomic) unsigned long long checkpoint;
@property (readonly, nonatomic) double activationExpiry;
@property (readonly, nonatomic) NSArray *activeParticipantPayloads;
@property (readonly, nonatomic) NSArray *persistentParticipantPayloads;
@property (readonly, nonatomic) PersistentPayloadUpdateResponse *persistentPayloadUpdateResponse;

- (void).cxx_destruct;
- (id)description;
- (id)initAssertionResponseWithCheckpoint:(unsigned long long)a0 activationExpiry:(double)a1 activeParticipantPayloads:(id)a2 persistentParticipantPayloads:(id)a3 persistentPayloadUpdateResponse:(id)a4;
- (id)initPollingResponseWithCheckpoint:(unsigned long long)a0 activeParticipantPayloads:(id)a1 persistentParticipantPayloads:(id)a2;

@end
