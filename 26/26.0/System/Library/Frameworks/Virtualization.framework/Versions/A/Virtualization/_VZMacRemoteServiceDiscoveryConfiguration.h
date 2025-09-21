@class NSArray;

@interface _VZMacRemoteServiceDiscoveryConfiguration : NSObject <NSCopying>

@property (copy) NSArray *hostServiceAllowList;
@property (copy) NSArray *guestServiceAllowList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
