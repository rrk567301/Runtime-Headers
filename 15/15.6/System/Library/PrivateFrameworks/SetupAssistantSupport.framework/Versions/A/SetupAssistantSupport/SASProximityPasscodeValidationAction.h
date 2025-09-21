@class NSString;

@interface SASProximityPasscodeValidationAction : SASProximityAction

@property (retain) NSString *passcode;
@property char passcodeValid;

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)a0;

- (void).cxx_destruct;
- (char)hasResponse;
- (id)requestPayload;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end
