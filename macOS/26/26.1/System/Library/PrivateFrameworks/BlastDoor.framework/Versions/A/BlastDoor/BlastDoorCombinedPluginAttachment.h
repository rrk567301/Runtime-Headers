@class NSString, BlastDoorEncodedAttachments, BlastDoorBalloonPluginPayloadWrapper;

@interface BlastDoorCombinedPluginAttachment : NSObject {
    void /* unknown type, empty encoding */ combinedPluginAttachment;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorEncodedAttachments *attachments;
@property (nonatomic, readonly) BlastDoorBalloonPluginPayloadWrapper *payload;

- (void).cxx_destruct;
- (id)init;

@end
