@class SASProximityInformation;

@interface SASProximityInformationAction : SASProximityAction

@property (retain) SASProximityInformation *information;

+ (unsigned long long)actionID;

- (BOOL)hasResponse;
- (void).cxx_destruct;
- (id)init;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end
