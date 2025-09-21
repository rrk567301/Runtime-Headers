@class WFLocation, NSCalendar, NSMutableDictionary;

@interface WFWeatherConditions : NSObject <NSCopying, NSSecureCoding> {
    WFLocation *_location;
}

@property (class, readonly) NSCalendar *calendar;
@property (class, readonly) unsigned long long dateComponentCalendarUnits;
@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *components;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } componentsLock;
@property (copy) WFLocation *location;
@property (getter=isNightForecast) char nightForecast;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setValue:(id)a0 forComponent:(id)a1;
- (id)valueForComponent:(id)a0;
- (id)dictionaryRepresentation;
- (void)_commonInit;
- (id)allComponents;
- (void)editLinksWithLocale:(id)a0 trackingParameter:(id)a1;
- (void)setValueSync:(id)a0 forComponent:(id)a1;
- (id)valueForComponentSync:(id)a0;
- (char)wf_isDay;
- (char)wf_isDayIfSunrise:(id)a0 sunset:(id)a1;

@end
