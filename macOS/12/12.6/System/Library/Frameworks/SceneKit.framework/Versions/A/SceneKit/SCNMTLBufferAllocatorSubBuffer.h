@class SCNFixedSizePage;

@interface SCNMTLBufferAllocatorSubBuffer : SCNMTLBuffer {
    SCNFixedSizePage *_parentPage;
}

- (void)dealloc;
- (id)initWithPage:(id)a0;

@end
