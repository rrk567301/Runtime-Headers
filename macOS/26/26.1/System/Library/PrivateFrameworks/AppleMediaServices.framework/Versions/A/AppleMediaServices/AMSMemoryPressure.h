@class NSString, AMSObservable;

@interface AMSMemoryPressure : NSObject

@property (class, readonly) AMSObservable *observable;
@property (class, readonly) NSString *lastKnownStatus;

+ (id)_memoryPressureStatusForMemoryPressure:(unsigned int)a0;
+ (void)initialize;
+ (void)unsubscribe:(id)a0;
+ (void)subscribe:(id)a0;

@end
