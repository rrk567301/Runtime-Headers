@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PFCanceler : NSObject <PFCanceler> {
    NSObject<OS_dispatch_queue> *_serializer;
    BOOL _isCanceled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsNotifyOnCancel;

- (BOOL)isCanceled;
- (void)cancel;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;

@end
