@class NSString, NSDate;

@interface CLSManagedPublicEventServerVersion : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (retain, nonatomic) NSString *version;
@property (nonatomic) long long sourceService;
@property (retain, nonatomic) NSDate *dateOfLastCachedVersion;
@property (retain, nonatomic) NSDate *dateOfServerUpdate;
@property (retain, nonatomic) NSDate *dateOfScheduledCacheInvalidationForVersion;

@end
