@class NSArray, NSNumber, NSObject;
@protocol OS_os_log;

@interface CBHIDEvent : NSObject {
    NSObject<OS_os_log> *_logHandle;
}

@property struct __IOHIDEvent { } *event;
@property struct __IOHIDServiceClient { } *service;
@property (readonly, nonatomic) float timestamp;
@property (readonly, nonatomic) unsigned int eventType;
@property (readonly, nonatomic) NSArray *copyChildren;
@property (readonly, nonatomic) NSNumber *serviceRegistryID;

+ (id)newEvent:(struct __IOHIDEvent { } *)a0 andService:(struct __IOHIDServiceClient { } *)a1;

- (id)initWithHIDEvent:(struct __IOHIDEvent { } *)a0 andService:(struct __IOHIDServiceClient { } *)a1;
- (id)asHidEvent;
- (float)floatValueForKey:(unsigned int)a0;
- (int)integerValueForKey:(unsigned int)a0;
- (void)dealloc;

@end
