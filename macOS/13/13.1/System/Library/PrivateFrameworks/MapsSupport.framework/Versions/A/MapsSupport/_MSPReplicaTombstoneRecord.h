@protocol MSPReplicaRecord;

@interface _MSPReplicaTombstoneRecord : NSProxy {
    id<MSPReplicaRecord> _record;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)_initWithRecord:(id)a0;
- (id)contents;
- (id)contentsTimestamp;

@end
