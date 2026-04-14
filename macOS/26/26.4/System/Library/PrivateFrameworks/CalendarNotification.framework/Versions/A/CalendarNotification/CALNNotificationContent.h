@class NSString, NSArray, NSURL, NSDate, CALNNotificationSound, NSDictionary;

@interface CALNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, copy, nonatomic) NSString *appEntityIdentifier;
@property (readonly, nonatomic) long long entityType;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSURL *defaultActionURL;
@property (readonly, nonatomic) BOOL shouldHideTime;
@property (readonly, copy, nonatomic) NSString *iconIdentifier;
@property (readonly, nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved;
@property (readonly, copy, nonatomic) NSArray *peopleIdentifiers;
@property (readonly, copy, nonatomic) CALNNotificationSound *sound;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) unsigned long long interruptionLevel;
@property (readonly, copy, nonatomic) NSString *filterCriteria;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToContent:(id)a0;
- (id)_initWithTitle:(id)a0 subtitle:(id)a1 body:(id)a2 categoryIdentifier:(id)a3 sectionIdentifier:(id)a4 appEntityIdentifier:(id)a5 entityType:(long long)a6 date:(id)a7 expirationDate:(id)a8 defaultActionURL:(id)a9 iconIdentifier:(id)a10 shouldHideTime:(BOOL)a11 shouldSuppressSyncDismissalWhenRemoved:(BOOL)a12 peopleIdentifiers:(id)a13 sound:(id)a14 userInfo:(id)a15 threadIdentifier:(id)a16 interruptionLevel:(unsigned long long)a17 filterCriteria:(id)a18;
- (BOOL)isEqualForDiffingPurposesToContent:(id)a0;

@end
