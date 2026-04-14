@class NSError, GEORegionInfo, NSObject;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface _GEORegionIteratorIvars : NSObject {
    NSObject<OS_dispatch_group> *_readGroup;
    NSObject<OS_dispatch_semaphore> *_writeSemaphore;
    GEORegionInfo *_next;
    BOOL _stop;
    BOOL _complete;
    NSError *_error;
}

- (void).cxx_destruct;

@end
