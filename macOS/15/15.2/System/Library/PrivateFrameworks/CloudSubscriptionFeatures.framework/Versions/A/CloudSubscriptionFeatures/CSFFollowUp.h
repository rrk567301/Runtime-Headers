@class NSString, NSDictionary, NSDate, NSNumber, NSUserDefaults;

@interface CSFFollowUp : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) BOOL hasDSID;
@property (class, readonly, nonatomic) BOOL anyUserHasEngagedWithCFU;
@property (class, nonatomic) BOOL hasEngagedWithCFU;
@property (class, readonly, nonatomic) NSDate *hasEngagedWithCFUDate;
@property (class, readonly, nonatomic) NSNumber *hasEngagedWithCFUGlobalDomain;
@property (class, readonly, nonatomic) NSDictionary *persistentDomain;
@property (class, readonly, nonatomic) NSString *userDefaultsKey;

+ (id)_persistentDomain;
+ (void)setHasEngagedWithCFUDate:(id)a0;
+ (void)setHasEngagedWithCFUGlobalDomain:(id)a0;

@end
