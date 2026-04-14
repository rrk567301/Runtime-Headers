@class NSString, BlastDoorMetadata;

@interface BlastDoorMarkUnreadRequest : NSObject {
    void /* unknown type, empty encoding */ markUnreadRequest;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
