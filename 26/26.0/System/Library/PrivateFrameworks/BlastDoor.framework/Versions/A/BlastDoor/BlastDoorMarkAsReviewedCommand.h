@class NSString, NSArray, BlastDoorMetadata;

@interface BlastDoorMarkAsReviewedCommand : NSObject {
    void /* unknown type, empty encoding */ markAsReviewedCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSArray *reviewedChatGUIDs;

- (id)init;
- (void).cxx_destruct;

@end
