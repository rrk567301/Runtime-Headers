@class NSString, BlastDoorMetadata;

@interface BlastDoorJunkChatCommand : NSObject {
    void /* unknown type, empty encoding */ junkChatCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
