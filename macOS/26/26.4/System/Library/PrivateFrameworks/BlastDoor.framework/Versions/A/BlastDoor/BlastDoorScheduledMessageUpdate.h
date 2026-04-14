@class NSString, BlastDoorMetadata;

@interface BlastDoorScheduledMessageUpdate : NSObject {
    void /* unknown type, empty encoding */ scheduledMessageUpdate;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) long long scheduleState;

- (void).cxx_destruct;
- (id)init;

@end
