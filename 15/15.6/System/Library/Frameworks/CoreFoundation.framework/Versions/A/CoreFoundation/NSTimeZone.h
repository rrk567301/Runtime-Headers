@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSData *data;

+ (id)_abbreviationDictionary;
+ (id)_autoupdating;
+ (id)_current;
+ (id)_default;
+ (id)_knownTimeZoneIdentifiers;
+ (id)_resetSystemTimeZone;
+ (void)_setAbbreviationDictionary:(id)a0;
+ (void)_setDefaultTimeZone:(id)a0;
+ (id)_timeZoneDataVersion;
+ (id)_timeZoneWithAbbreviation:(id)a0;
+ (id)_timeZoneWithName:(id)a0;
+ (id)_timeZoneWithName:(id)a0 data:(id)a1;
+ (id)_timeZoneWithName:(id)a0 tryAbbrev:(char)a1;
+ (id)_timeZoneWithSecondsFromGMT:(long long)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultTimeZone;
+ (id)abbreviationDictionary;
+ (id)knownTimeZoneNames;
+ (id)localTimeZone;
+ (void)resetSystemTimeZone;
+ (void)setAbbreviationDictionary:(id)a0;
+ (void)setDefaultTimeZone:(id)a0;
+ (char)supportsSecureCoding;
+ (id)systemTimeZone;
+ (id)timeZoneDataVersion;
+ (id)timeZoneForSecondsFromGMT:(long long)a0;
+ (id)timeZoneWithAbbreviation:(id)a0;
+ (id)timeZoneWithName:(id)a0;
+ (id)timeZoneWithName:(id)a0 data:(id)a1;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)abbreviation;
- (id)abbreviationForDate:(id)a0;
- (double)daylightSavingTimeOffset;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;
- (char)isDaylightSavingTime;
- (char)isDaylightSavingTimeForDate:(id)a0;
- (char)isEqualToTimeZone:(id)a0;
- (char)isNSTimeZone__;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (id)nextDaylightSavingTimeTransition;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (long long)secondsFromGMT;
- (long long)secondsFromGMTForDate:(id)a0;

@end
