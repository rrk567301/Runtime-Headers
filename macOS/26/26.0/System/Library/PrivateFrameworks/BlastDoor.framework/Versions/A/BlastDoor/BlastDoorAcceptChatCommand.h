@class NSString, BlastDoorMetadata;

@interface BlastDoorAcceptChatCommand : NSObject {
    void /* unknown type, empty encoding */ acceptChatCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
