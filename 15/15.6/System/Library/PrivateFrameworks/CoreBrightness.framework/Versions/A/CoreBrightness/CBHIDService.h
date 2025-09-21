@class NSObject;
@protocol OS_os_log;

@interface CBHIDService : NSObject {
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) struct __IOHIDServiceClient { } *service;
@property (readonly) unsigned long long registryID;
@property struct __IOHIDEvent { } *event;
@property (readonly) char builtIn;

- (void)dealloc;
- (id)init;
- (char)updateEventData;
- (char)conformsToHIDService:(struct __IOHIDServiceClient { } *)a0;
- (char)conformsToUsagePage:(unsigned long long)a0 andUsage:(unsigned long long)a1;
- (id)copyPropertyForKey:(id)a0;
- (id)initWithHIDServiceClient:(struct __IOHIDServiceClient { } *)a0 andIdentifier:(id)a1;
- (char)setPropertyForKey:(id)a0 withValue:(id)a1;

@end
