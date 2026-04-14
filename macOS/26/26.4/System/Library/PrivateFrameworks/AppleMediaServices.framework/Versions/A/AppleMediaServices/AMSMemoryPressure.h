@class NSString, AMSObservable;

@interface AMSMemoryPressure : NSObject

@property (class, readonly) AMSObservable *observable;
@property (class, readonly) NSString *lastKnownStatus;

+ (void)initialize;
+ (void)unsubscribe:(id)a0;
+ (void)subscribe:(id)a0;
+ (id)_memoryPressureStatusForMemoryPressure:(unsigned int)a0;

@end
