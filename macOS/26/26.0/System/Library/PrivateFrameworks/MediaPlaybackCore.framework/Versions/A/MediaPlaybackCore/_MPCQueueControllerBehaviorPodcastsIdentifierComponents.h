@class NSString;

@interface _MPCQueueControllerBehaviorPodcastsIdentifierComponents : NSObject <MPCQueueControllerItemIdentifierComponents> {
    void /* function */ contentItemID;
    void /* function */ sectionID;
    void /* function */ itemID;
}

@property (nonatomic, copy) NSString *contentItemID;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic, readonly) unsigned short behaviorFlags;

- (id)init;
- (void).cxx_destruct;

@end
