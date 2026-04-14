@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEnumerator:(id)a0;
- (void)subscribe:(id)a0;
- (id)initWithSequence:(id)a0;
- (id)bookmarkableUpstreams;

@end
