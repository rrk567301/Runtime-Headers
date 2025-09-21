@class NSString, BSServiceConnectionEndpoint, BSServiceInterface;

@interface WMXPCInterface : NSObject

@property (class, readonly, copy) NSString *bsServiceDomain;
@property (class, readonly, copy) NSString *bsAppServiceIdentifier;
@property (class, readonly, copy) NSString *machServiceLaunchNotificationName;
@property (class, readonly, copy) BSServiceConnectionEndpoint *appServiceEndpoint;
@property (class, readonly, copy) BSServiceInterface *serviceInterface;

+ (id)machServiceName;
+ (unsigned int)_targetUserIdentifier;

@end
