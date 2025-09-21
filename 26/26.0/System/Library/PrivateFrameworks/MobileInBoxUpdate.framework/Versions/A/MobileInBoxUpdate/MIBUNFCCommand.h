@class NSData, NSMutableDictionary, NSDictionary;

@interface MIBUNFCCommand : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutablePayload;
@property (readonly, nonatomic) unsigned char cla;
@property (readonly, nonatomic) unsigned char ins;
@property (readonly, nonatomic) unsigned char p1;
@property (readonly, nonatomic) unsigned char p2;
@property (readonly, nonatomic) NSData *apdu;
@property (readonly, nonatomic) long long code;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSData *serializedPayload;
@property (readonly, getter=getResponseClass) Class responseClass;

+ (unsigned short)expectedAPDULength:(id)a0;

- (void).cxx_destruct;
- (id)initWithCommandCode:(long long)a0 andPayload:(id)a1;
- (BOOL)_deserializeAuthenticate;
- (BOOL)_deserializeChallenge;
- (BOOL)_deserializeConfigureNFC;
- (BOOL)_deserializeHeartbeat;
- (BOOL)_deserializeRetryAfter;
- (BOOL)_deserializeSSUpdate;
- (BOOL)_deserializeStartDiag;
- (BOOL)_deserializeStartUpdate;
- (BOOL)_deserializeTatsuPayload;
- (BOOL)_initWithAPDU:(id)a0;
- (BOOL)_initWithCommandCode:(long long)a0;
- (id)_serializeAuthenticate;
- (id)_serializeChallenge;
- (id)_serializeConfigureNFC;
- (id)_serializeHeartbeat;
- (id)_serializeRetryAfter;
- (id)_serializeSSUpdate;
- (id)_serializeStartDiag;
- (id)_serializeStartUpdate;
- (id)_serializeTatsuPayload:(id)a0;
- (id)initWithAPDU:(id)a0;

@end
