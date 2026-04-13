@class NSTask, NSPipe, NSMutableData, NSValueTransformer;

@interface TaskOutputLineEnumerator : NSEnumerator {
    NSTask *_task;
    NSPipe *_readPipe;
    NSMutableData *_bufferData;
    NSValueTransformer *_pathTransformer;
}

- (void)dealloc;
- (id)nextObject;
- (void).cxx_destruct;
- (id)_getBufferedLineIfAvailable;
- (id)initWithLaunchPath:(id)a0 arguments:(id)a1;
- (void)setPathTransformer:(id)a0;

@end
