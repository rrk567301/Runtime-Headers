@class NSString, LSApplicationProxy, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FCNewsAvailabilityMonitor : NSObject <FCNewsAvailabilityMonitor>

@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) LSApplicationProxy *applicationProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isNewsAvailable) char NewsIsAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateAvailability;
- (id)initWithApplicationProxy:(id)a0 queue:(id)a1;
- (char)_isNewsAvailable;
- (void)addNotificationBlock:(id /* block */)a0;
- (id)initWithProcessVariant:(unsigned long long)a0;
- (id)initWithProcessVariant:(unsigned long long)a0 queue:(id)a1;
- (void)setNewsIsAvailable:(char)a0;

@end
