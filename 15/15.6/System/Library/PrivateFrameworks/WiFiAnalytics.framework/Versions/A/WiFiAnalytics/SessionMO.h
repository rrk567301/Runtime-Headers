@class LeaveMO, NSSet, JoinMO, NSDate;

@interface SessionMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *end;
@property (nonatomic) long long inChargingDayTime;
@property (nonatomic) long long inChargingNightTime;
@property (nonatomic) long long inStationaryDayTime;
@property (nonatomic) long long inStationaryNightTime;
@property (nonatomic) long long usageDayTime;
@property (nonatomic) long long usageNightTime;
@property (retain, nonatomic) JoinMO *join;
@property (retain, nonatomic) LeaveMO *leave;
@property (retain, nonatomic) NSSet *roamsSet;

+ (id)entityName;
+ (id)fetchRequest;
+ (char)buildAndAddSessionWithJoin:(id)a0 moc:(id)a1;
+ (char)addMostRecentSession:(id)a0 moc:(id)a1;
+ (char)addSession:(id)a0 leave:(id)a1 roams:(id)a2 moc:(id)a3;
+ (char)addSessionsForFirstUse:(id)a0;
+ (char)firstSessionCreated:(id)a0;
+ (id)getMostRecentSession:(id)a0 moc:(id)a1;
+ (id)getSessions:(id)a0 sortedAscending:(char)a1 moc:(id)a2;
+ (id)getSessionsWithMostRecentDays:(id)a0 days:(unsigned long long)a1 sortedAscending:(char)a2 moc:(id)a3;

@end
