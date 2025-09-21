@class NSString, NSArray, NSDictionary, NSNumber;

@interface SARDStartServerRequest : SAStartRequest

@property (copy, nonatomic) NSString *audioDestination;
@property (copy, nonatomic) NSString *audioSource;
@property (copy, nonatomic) NSArray *bargeInModes;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property (nonatomic) char textRequest;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
