@class NSString, NSArray;

@interface KNRecordingEventTrack : TSPObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *events;

- (id)description;
- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 type:(id)a1 events:(id)a2;
- (void)p_slideNodeWasAddedToOrRemovedFromDocument;
- (id)eventTrackByReplacingSegmentAfterTime:(double)a0 withEventTrack:(id)a1;
- (void)slideNodeWasAddedToDocument:(id)a0;
- (void)slideNodeWillBeRemovedFromDocument:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;

@end
