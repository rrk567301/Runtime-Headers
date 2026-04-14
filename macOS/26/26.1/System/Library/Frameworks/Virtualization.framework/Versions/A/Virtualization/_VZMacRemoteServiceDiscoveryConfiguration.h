@class NSArray;

@interface _VZMacRemoteServiceDiscoveryConfiguration : NSObject <NSCopying>

@property (copy) NSArray *hostServiceAllowList;
@property (copy) NSArray *guestServiceAllowList;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
