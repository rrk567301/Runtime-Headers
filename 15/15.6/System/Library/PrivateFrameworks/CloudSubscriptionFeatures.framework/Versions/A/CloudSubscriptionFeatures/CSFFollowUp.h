@class NSString, NSDictionary, NSDate, NSUserDefaults;

@interface CSFFollowUp : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) char hasDSID;
@property (class, readonly, nonatomic) char anyUserHasEngagedWithCFU;
@property (class, nonatomic) char hasEngagedWithCFU;
@property (class, readonly, nonatomic) NSDate *hasEngagedWithCFUDate;
@property (class, readonly, nonatomic) NSDictionary *persistentDomain;
@property (class, readonly, nonatomic) NSString *userDefaultsKey;

+ (void)setHasEngagedWithCFUDate:(id)a0;

@end
