@class NSString, NSArray, BlastDoorMetadata;

@interface BlastDoorMarkAsReviewedCommand : NSObject {
    void /* unknown type, empty encoding */ markAsReviewedCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSArray *reviewedChatGUIDs;

- (void).cxx_destruct;
- (id)init;

@end
