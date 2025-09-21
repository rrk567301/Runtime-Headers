@interface REMReminderFetchOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) REMReminderFetchOptions *defaultFetchOptions;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char includeConcealed;
@property (nonatomic) char includeDueDateDeltaAlerts;

+ (id)fetchOptionsIncludingConcealed;
+ (id)fetchOptionsIncludingDueDateDeltaAlerts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)copyFromFetchOptions:(id)a0;
- (id)fetchOptionsIncludingConcealed;
- (id)fetchOptionsIncludingDueDateDeltaAlerts;
- (id)initWithIncludeConcealed:(char)a0 includeDueDateDeltaAlerts:(char)a1;

@end
