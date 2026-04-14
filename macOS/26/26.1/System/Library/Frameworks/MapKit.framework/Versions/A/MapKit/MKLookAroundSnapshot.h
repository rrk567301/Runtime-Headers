@class NSImage, MKMapSnapshot;

@interface MKLookAroundSnapshot : NSObject {
    MKMapSnapshot *_snapshot;
}

@property (readonly, nonatomic) NSImage *image;

- (id)initWithSnapshot:(id)a0;
- (void).cxx_destruct;

@end
