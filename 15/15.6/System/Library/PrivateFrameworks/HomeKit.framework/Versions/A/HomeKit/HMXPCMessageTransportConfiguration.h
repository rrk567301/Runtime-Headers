@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMXPCMessageTransportConfiguration : NSObject <HMFObject, NSCopying, NSMutableCopying>

@property unsigned long long requiredEntitlements;
@property char requiresHomeDataAccess;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy) NSString *machServiceName;
@property (readonly, copy) NSString *serverStartNotification;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;

@end
