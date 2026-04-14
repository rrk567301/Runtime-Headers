@interface BMTombstoneEventEnumerator : BMStoreEnumeratorBase

- (id)nextEvent;
- (id)_eventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)_originalEventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)nextTombstoneEvent;
- (id)peekEvent;
- (id)peekTombstoneEvent;

@end
