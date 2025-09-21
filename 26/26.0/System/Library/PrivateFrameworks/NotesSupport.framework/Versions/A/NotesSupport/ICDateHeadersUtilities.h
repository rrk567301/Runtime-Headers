@class NSString;

@interface ICDateHeadersUtilities : NSObject

@property (class, nonatomic) long long defaultDateHeadersType;
@property (class, nonatomic) long long queryDateHeadersType;
@property (class, readonly, nonatomic) BOOL supportsQueryDateHeaders;
@property (class, readonly, nonatomic) BOOL showsQueryDateHeaders;
@property (class, readonly, nonatomic) NSString *menuTitle;

+ (void)clearCache;
+ (id)actionItemTitleWithDateHeadersType:(long long)a0;
+ (BOOL)currentDateHeadersOn;
+ (BOOL)isShowingQueryDateHeadersForDateHeadersType:(long long)a0;
+ (void)setDateHeadersOn:(BOOL)a0;
+ (void)setDateHeadersUserPreference:(long long)a0 forKey:(id)a1 postNotificationName:(id)a2;
+ (id)stringForDateHeadersType:(long long)a0;

@end
