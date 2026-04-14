@class NSString, BlastDoorMetadata;

@interface BlastDoorJunkChatCommand : NSObject {
    void /* unknown type, empty encoding */ junkChatCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
