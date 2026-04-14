@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MTL4CommandQueueDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL lockParameterBufferSizeToMax;
@property (nonatomic) BOOL supportMTLEvent;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) NSObject<OS_dispatch_queue> *feedbackQueue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
