@class NSObject;
@protocol OS_dispatch_queue;

@interface HMMutableXPCMessageTransportConfiguration : HMXPCMessageTransportConfiguration

@property unsigned long long requiredEntitlements;
@property char requiresHomeDataAccess;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
