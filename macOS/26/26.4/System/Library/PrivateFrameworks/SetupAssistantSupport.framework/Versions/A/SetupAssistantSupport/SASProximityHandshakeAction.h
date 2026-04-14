@class SASProximityHandshake;

@interface SASProximityHandshakeAction : SASProximityAction

@property (retain) SASProximityHandshake *handshake;

+ (unsigned long long)actionID;

- (BOOL)hasResponse;
- (void).cxx_destruct;
- (id)init;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end
