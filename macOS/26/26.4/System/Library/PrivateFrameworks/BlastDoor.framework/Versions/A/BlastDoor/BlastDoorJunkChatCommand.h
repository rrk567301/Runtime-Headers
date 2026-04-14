@class NSString, BlastDoorTrustKitSpamReport, BlastDoorMetadata;

@interface BlastDoorJunkChatCommand : NSObject {
    void /* unknown type, empty encoding */ junkChatCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) BlastDoorTrustKitSpamReport *trustKitSpamReport;

- (void).cxx_destruct;
- (id)init;

@end
