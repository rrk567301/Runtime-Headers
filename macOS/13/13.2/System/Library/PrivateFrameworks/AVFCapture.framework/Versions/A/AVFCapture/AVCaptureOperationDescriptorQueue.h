@class NSMutableArray;

@interface AVCaptureOperationDescriptorQueue : NSObject {
    NSMutableArray *_operationDescriptorQueueItems;
}

- (void)dealloc;
- (id)init;
- (void)enqueueOperationDescriptor:(id)a0 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 dequeuedOperationDescriptors:(id *)a2;
- (id)operationDescriptorForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 dequeue:(BOOL)a1;
- (id)newestOperationDescriptorOfClass:(Class)a0 operationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (id)dequeueAllOperationDescriptors;

@end
