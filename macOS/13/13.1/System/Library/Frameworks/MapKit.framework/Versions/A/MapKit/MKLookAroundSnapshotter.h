@class MKMapSnapshotter;

@interface MKLookAroundSnapshotter : NSObject {
    MKMapSnapshotter *_snapshotter;
}

@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithScene:(id)a0 options:(id)a1;
- (void)getSnapshotWithCompletionHandler:(id /* block */)a0;

@end
