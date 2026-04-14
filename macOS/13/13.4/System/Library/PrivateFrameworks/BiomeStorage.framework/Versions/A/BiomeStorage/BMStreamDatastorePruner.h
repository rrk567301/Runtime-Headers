@class BMStreamDatastore;
@protocol BMStreamDatastorePruningDelegate;

@interface BMStreamDatastorePruner : NSObject <BMStreamDatastorePruningDelegate> {
    BMStreamDatastore *_inner;
}

@property (weak, nonatomic) id<BMStreamDatastorePruningDelegate> delegate;
@property (readonly, nonatomic) BOOL canReadOrPruneData;

- (void).cxx_destruct;
- (Class)eventBodyClass;
- (void)eventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 shouldDeleteUsingBlock:(id /* block */)a3;
- (id)initWithStream:(id)a0 config:(id)a1;
- (id)newEnumeratorFromBookmark:(id)a0;
- (void)removeEventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)streamIdentifier;
- (void)removeEventsFrom:(double)a0 to:(double)a1 usingBlock:(id /* block */)a2;
- (void)syncMappedFiles;
- (void)willPruneEvent:(id)a0;
- (BOOL)deleteEventAtBookmark:(id)a0 outTombstoneBookmark:(id *)a1;
- (void)didPruneEvents;
- (void)eventsFrom:(double)a0 to:(double)a1 shouldDeleteUsingBlock:(id /* block */)a2;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (id)newEnumeratorFromStartTime:(double)a0;
- (void)removeEventsFrom:(double)a0 to:(double)a1 callback:(id /* block */)a2;

@end
