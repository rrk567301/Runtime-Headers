@class NSArray;

@interface MicroLocationDaemon.ULAnchorSmootherResult : NSObject {
    void /* function */ removedAnchorUUIDs;
}

@property (nonatomic, readonly) BOOL accepted;
@property (nonatomic, readonly) NSArray *removedAnchorUUIDs;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccepted:(BOOL)a0 removedAnchorUUIDs:(id)a1;

@end
