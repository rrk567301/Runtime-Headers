@class NSString;

@interface SiriSetup.CoreFollowupIdentifiers : NSObject

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *voiceRepairFlowIdentifier;
@property (nonatomic, readonly) NSString *voiceRepairFlowGroupIdentifier;

- (id)init;

@end
