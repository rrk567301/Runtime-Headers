@class NSString, NSLocale, NSTimeZone;

@interface GEORegionInfo : NSObject <NSSecureCoding> {
    NSLocale *_locale;
    NSTimeZone *_timeZone;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) unsigned int order;
@property (readonly, nonatomic) NSString *format;
@property (readonly, nonatomic) unsigned long long regionId;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSString *ianaTimeZoneName;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localeName;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *isoCode;
@property (readonly, nonatomic) struct { double latitude; double longitude; } representativeCoordinate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithId:(long long)a0 isoCode:(id)a1 type:(unsigned int)a2 order:(unsigned int)a3 timeZone:(id)a4 name:(id)a5 language:(id)a6 format:(id)a7 lat:(double)a8 lng:(double)a9;

@end
