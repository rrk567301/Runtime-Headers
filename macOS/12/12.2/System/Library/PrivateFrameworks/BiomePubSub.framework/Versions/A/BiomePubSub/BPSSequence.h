@class NSArray;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSArray *sequence;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)initWithSequence:(id)a0;
- (id)bookmarkableUpstreams;

@end
