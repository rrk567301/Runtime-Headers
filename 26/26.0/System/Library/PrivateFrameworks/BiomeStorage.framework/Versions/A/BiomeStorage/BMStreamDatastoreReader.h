@class BMFrameStore, BMStreamDatastore;

@interface BMStreamDatastoreReader : NSObject

@property (readonly, nonatomic) BMStreamDatastore *inner;
@property (retain, nonatomic) BMFrameStore *currentFrameStore;
@property (readonly, nonatomic) BOOL isDataAccessible;

- (id)newEnumeratorFromBookmark:(id)a0;
- (Class)eventBodyClass;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (id)streamIdentifier;
- (id)newEnumeratorFromStartTime:(double)a0;
- (id)fetchEventsFrom:(double)a0 to:(double)a1 options:(unsigned long long)a2;
- (id)newEnumeratorFromStartTime:(double)a0 endTime:(double)a1 maxEvents:(unsigned long long)a2 lastN:(unsigned long long)a3 options:(unsigned long long)a4;
- (id)newEnumeratorFromStartTime:(double)a0 endTime:(double)a1 maxEvents:(unsigned long long)a2 options:(unsigned long long)a3;
- (id)newEnumeratorFromStartTime:(double)a0 options:(unsigned long long)a1;
- (id)initWithStream:(id)a0 config:(id)a1;
- (id)newEnumeratorFromBookmark:(id)a0 options:(unsigned long long)a1;
- (id)initWithStream:(id)a0 config:(id)a1 eventDataClass:(Class)a2 useCase:(id)a3;
- (id)newEnumeratorFromBookmarkEnumerator:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
