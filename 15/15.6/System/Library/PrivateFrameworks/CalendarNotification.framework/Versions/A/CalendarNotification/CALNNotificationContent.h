@class NSString, NSArray, NSURL, NSDate, CALNNotificationSound, NSDictionary;

@interface CALNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSURL *defaultActionURL;
@property (readonly, nonatomic) char shouldHideTime;
@property (readonly, copy, nonatomic) NSString *iconIdentifier;
@property (readonly, nonatomic) char shouldSuppressSyncDismissalWhenRemoved;
@property (readonly, copy, nonatomic) NSArray *peopleIdentifiers;
@property (readonly, copy, nonatomic) CALNNotificationSound *sound;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) unsigned long long interruptionLevel;
@property (readonly, copy, nonatomic) NSString *filterCriteria;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithTitle:(id)a0 subtitle:(id)a1 body:(id)a2 categoryIdentifier:(id)a3 sectionIdentifier:(id)a4 date:(id)a5 expirationDate:(id)a6 defaultActionURL:(id)a7 iconIdentifier:(id)a8 shouldHideTime:(char)a9 shouldSuppressSyncDismissalWhenRemoved:(char)a10 peopleIdentifiers:(id)a11 sound:(id)a12 userInfo:(id)a13 threadIdentifier:(id)a14 interruptionLevel:(unsigned long long)a15 filterCriteria:(id)a16;
- (char)isEqualForDiffingPurposesToContent:(id)a0;
- (char)isEqualToContent:(id)a0;

@end
