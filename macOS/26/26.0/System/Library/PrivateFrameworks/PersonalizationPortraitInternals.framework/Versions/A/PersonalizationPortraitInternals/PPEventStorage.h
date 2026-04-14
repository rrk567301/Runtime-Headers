@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPEventStorage : NSObject {
    id /* block */ _purgerGetter;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)defaultStorage;

- (void)clearCaches;
- (id)nlEventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)eventWithIdentifier:(id)a0;
- (id)suggestedEventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ekStore:(id)a1;
- (BOOL)attemptToPurgeImmediately;
- (id)initWithEventStorePurger:(id)a0;
- (BOOL)shouldIgnoreEventsOnCalendarWithObjectID:(id)a0;
- (void)enumerateEventsFromEKObjectIDs:(id)a0 expandingRecurrencesInRange:(id)a1 usingBlock:(id /* block */)a2;
- (id)initWithEventStorePurgerGetter:(id /* block */)a0;
- (id)init;
- (BOOL)shouldIngestEvent:(id)a0;
- (id)eventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)runBlockWithPurgerDisabled:(id /* block */)a0;
- (BOOL)eventKitChangeIsEvent:(id)a0;
- (id)resolveEventFromEKChange:(id)a0;
- (void)iterateEventsFrom:(id)a0 to:(id)a1 inChunks:(int)a2 withBlock:(id /* block */)a3;
- (id)eventWithExternalID:(id)a0;
- (void)enumerateEventsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)setInvisibleCalendarIdentifiers:(id)a0;
- (void).cxx_destruct;

@end
