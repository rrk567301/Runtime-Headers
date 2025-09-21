@class NSUUID, NSString, BlacklistMO, NSSet, NSObject;

@interface NetworkMO : NSManagedObject

@property (nonatomic) int authFlags;
@property (retain, nonatomic) NSObject *channels;
@property (copy, nonatomic) NSUUID *colocatedScopeId;
@property (nonatomic) long long colocatedState;
@property (nonatomic) char didDeploymentChange;
@property (nonatomic) char isHome;
@property (nonatomic) char isLongTermNetwork;
@property (nonatomic) char isMoving;
@property (nonatomic) char isOmnipresent;
@property (nonatomic) char isTCPGood;
@property (nonatomic) char isWork;
@property (nonatomic) long long networkScore;
@property (readonly, nonatomic) long long numBSS;
@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) long long switchedAwayFromCount;
@property (nonatomic) long long switchedToCount;
@property (nonatomic) int usageRank;
@property (nonatomic) long long usageTime;
@property (retain, nonatomic) BlacklistMO *blacklist;
@property (retain, nonatomic) NSSet *bss;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)allStoredSsids:(id)a0;
+ (void)classifyTraitsForNetwork:(id)a0 distanceFilter:(double)a1 moc:(id)a2;
+ (char)coalesceSsidsIntoColocatedScope:(id)a0 moc:(id)a1;
+ (id)copyAllSsids:(id)a0;
+ (id)copyAllSsidsWithColocatedScopeId:(id)a0 moc:(id)a1;
+ (id)copyAllSsidsWithColocatedScopeIdStr:(id)a0 moc:(id)a1;
+ (id)copyAllSsidsWithTrait:(id)a0 trait:(unsigned long long)a1;
+ (id)generateInstance:(id)a0 created:(char *)a1 moc:(id)a2;
+ (id)getFirstColocatedScopeUuidForSsids:(id)a0 moc:(id)a1;
+ (id)getInstance:(id)a0 moc:(id)a1;
+ (long long)getTotalScore:(id)a0 moc:(id)a1;
+ (char)invalidateColocatedScopeForSsidArray:(id)a0 moc:(id)a1;
+ (id)networkManagedObjectPropertyValue:(id)a0 forKey:(id)a1;
+ (char)removeNetwork:(id)a0 moc:(id)a1;
+ (char)setNetworkManagedObjectPropertyValueForKey:(id)a0 forKey:(id)a1 withValue:(id)a2;

@end
