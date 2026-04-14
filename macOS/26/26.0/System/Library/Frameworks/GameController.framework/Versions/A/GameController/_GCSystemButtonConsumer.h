@class NSString;
@protocol GCSystemButtonEventConsuming;

@interface _GCSystemButtonConsumer : NSObject <NSObject> {
    _Atomic BOOL _invalid;
    id<GCSystemButtonEventConsuming> _eventConsumer;
    NSString *_reason;
    long long _priority;
}

@property (readonly, getter=isInvalid) BOOL invalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compareTo:(id)a0;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;

@end
