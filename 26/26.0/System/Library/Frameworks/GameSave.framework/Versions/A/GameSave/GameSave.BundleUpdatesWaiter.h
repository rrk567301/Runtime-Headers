@interface GameSave.BundleUpdatesWaiter : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ bundleURL;
    void /* unknown type, empty encoding */ metadataQuery;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ finishedGathering;
    void /* unknown type, empty encoding */ finishedGatheringContinuation;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ updateStreamContinuation;
}

- (void)finishedGatheringWithNotification:(id)a0;
- (void)receivedUpdatesWithNotification:(id)a0;

@end
