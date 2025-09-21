@class NSString, NSMutableArray, NSArray;

@interface HMDBackingStoreCacheZone : HMFObject

@property (retain) NSMutableArray *actualGroups;
@property (readonly) long long zoneID;
@property (readonly) NSString *zoneName;
@property (readonly) NSArray *groups;

- (id)dumpDebug;
- (void).cxx_destruct;
- (id)initWithZoneID:(long long)a0 name:(id)a1;

@end
