@class NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface GCHIDServiceInfo : NSObject <NSCopying>

@property (readonly) struct __IOHIDServiceClient { } *service;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSNumber *registryID;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (id)redactedDescription;
- (id)numberPropertyForKey:(id)a0;
- (id)initWithService:(struct __IOHIDServiceClient { } *)a0 queue:(id)a1;
- (id)dictionaryPropertyForKey:(id)a0;
- (id)stringPropertyForKey:(id)a0;
- (BOOL)isEqualToHIDServiceInfo:(id)a0;
- (id)propertyForKey:(id)a0 ofClass:(Class)a1;

@end
