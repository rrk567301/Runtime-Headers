@class NSString, NSArray, BlastDoorMetadata;

@interface BlastDoorPriorityMessageCommand : NSObject {
    void /* unknown type, empty encoding */ priorityMessageCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSArray *priorityMessageGUIDs;

- (id)init;
- (void).cxx_destruct;

@end
