@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TUNotifyObserver : NSObject <TUNotifyObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *notificationName;
@property (nonatomic) int token;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic, getter=isObserving) BOOL observing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)endObserving;
- (void)beginObserving;
- (void)_endObserving;
- (id)initWithNotificationName:(id)a0 queue:(id)a1 callback:(id /* block */)a2;
- (id)initWithNotificationName:(id)a0 queue:(id)a1;
- (void).cxx_destruct;

@end
