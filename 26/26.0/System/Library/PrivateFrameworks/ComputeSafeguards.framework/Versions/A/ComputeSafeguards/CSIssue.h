@class NSString, CSDetectionRule, NSDate, NSNumber;

@interface CSIssue : NSObject

@property (readonly) NSString *identifier;
@property (retain) NSDate *startTime;
@property (retain) NSDate *endTime;
@property (retain) NSString *processName;
@property int lastPID;
@property (retain) NSString *lastPUUID;
@property (retain) NSString *launchdName;
@property unsigned long long coalitionID;
@property unsigned char issueType;
@property (retain) NSNumber *value;
@property (retain) CSDetectionRule *rule;
@property unsigned char mitigationSuggestion;
@property int mitigationSuggestionReason;
@property BOOL forceMitigationSuggestion;
@property unsigned char mitigationDecisionType;
@property unsigned char mitigationDecisionReason;
@property (retain) NSString *errorString;
@property BOOL overridden;
@property (retain) NSString *detectorString;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andLaunchdName:(id)a1 andIssueType:(int)a2 andStartTime:(id)a3 andEndTime:(id)a4;
- (id)initWithIdentifier:(id)a0 andProcessName:(id)a1 andIssueType:(int)a2 andStartTime:(id)a3 andEndTime:(id)a4;

@end
