@class NSNumber, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface _GCHIDServiceInfo : NSObject <NSCopying> {
    NSData *_inputData;
}

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
- (id)redactedDescription;
- (id)initWithService:(struct __IOHIDServiceClient { } *)a0 queue:(id)a1;
- (BOOL)isEqualToHIDServiceInfo:(id)a0;

@end
