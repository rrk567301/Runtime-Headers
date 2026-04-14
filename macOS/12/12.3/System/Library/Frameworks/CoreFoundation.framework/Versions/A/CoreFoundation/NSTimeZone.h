@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSData *data;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)timeZoneForSecondsFromGMT:(long long)a0;
+ (id)systemTimeZone;
+ (id)abbreviationDictionary;
+ (void)resetSystemTimeZone;
+ (id)defaultTimeZone;
+ (void)setDefaultTimeZone:(id)a0;
+ (id)localTimeZone;
+ (id)knownTimeZoneNames;
+ (void)setAbbreviationDictionary:(id)a0;
+ (id)timeZoneDataVersion;
+ (id)timeZoneWithName:(id)a0 data:(id)a1;
+ (id)timeZoneWithName:(id)a0;
+ (id)timeZoneWithAbbreviation:(id)a0;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_cfTypeID;
- (BOOL)isNSTimeZone__;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)initWithName:(id)a0;
- (BOOL)isEqualToTimeZone:(id)a0;
- (id)abbreviation;
- (long long)secondsFromGMT;
- (BOOL)isDaylightSavingTime;
- (double)daylightSavingTimeOffset;
- (id)nextDaylightSavingTimeTransition;

@end
