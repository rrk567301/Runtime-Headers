@class NSDate;

@interface GDGeoHashVisitEvent : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long geoHash;
@property (readonly, nonatomic) char isEnter;
@property (readonly, nonatomic) long long level;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 geoHash:(unsigned long long)a1 isEnter:(char)a2 level:(long long)a3;

@end
