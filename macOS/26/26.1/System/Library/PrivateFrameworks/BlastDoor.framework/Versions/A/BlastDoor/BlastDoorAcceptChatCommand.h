@class NSString, BlastDoorMetadata;

@interface BlastDoorAcceptChatCommand : NSObject {
    void /* unknown type, empty encoding */ acceptChatCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
