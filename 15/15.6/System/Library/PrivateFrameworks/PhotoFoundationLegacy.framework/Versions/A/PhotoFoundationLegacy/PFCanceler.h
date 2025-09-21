@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PFCanceler : NSObject <PFCanceler> {
    NSObject<OS_dispatch_queue> *_serializer;
    char _isCanceled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsNotifyOnCancel;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)cancel;
- (char)isCanceled;

@end
