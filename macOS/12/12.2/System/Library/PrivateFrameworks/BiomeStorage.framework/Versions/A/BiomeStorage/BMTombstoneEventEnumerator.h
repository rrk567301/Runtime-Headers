@interface BMTombstoneEventEnumerator : BMStoreEnumeratorBase

- (id)nextEvent;
- (id)_eventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)peekEvent;
- (id)_originaleventWithFrameStore:(id)a0 frame:(id)a1 error:(unsigned char)a2;
- (id)peekTombstoneEvent;
- (id)nextTombstoneEvent;

@end
