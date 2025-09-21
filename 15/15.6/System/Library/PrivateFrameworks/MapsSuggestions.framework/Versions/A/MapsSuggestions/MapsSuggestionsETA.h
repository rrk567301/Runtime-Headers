@class NSString, CLLocation, NSDate;

@interface MapsSuggestionsETA : NSObject <NSSecureCoding, NSCopying, MapsSuggestionsJSONable>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double seconds;
@property (readonly, nonatomic) NSString *shortTrafficString;
@property (readonly, nonatomic) NSString *longTrafficString;
@property (readonly, nonatomic) NSString *writtenRouteName;
@property (readonly, nonatomic) NSString *spokenRouteName;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSString *originator;
@property (readonly, nonatomic) double age;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ETAWithData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSeconds:(double)a0 shortTrafficString:(id)a1 longTrafficString:(id)a2 writtenRouteName:(id)a3 spokenRouteName:(id)a4 transportType:(int)a5 location:(id)a6 time:(id)a7;
- (id)initWithSeconds:(double)a0 shortTrafficString:(id)a1 longTrafficString:(id)a2 writtenRouteName:(id)a3 spokenRouteName:(id)a4 transportType:(int)a5 location:(id)a6 time:(id)a7 originator:(id)a8;
- (id)initWithSeconds:(double)a0 trafficString:(id)a1 transportType:(int)a2 location:(id)a3;
- (id)initWithTrafficAndETAResult:(id)a0 transportType:(int)a1 location:(id)a2 time:(id)a3;
- (char)isBetterThanETA:(id)a0 requirements:(id)a1;
- (char)isEqualToETA:(id)a0;
- (char)isValidForLocation:(id)a0 requirements:(id)a1;
- (id)nameForJSON;
- (id)objectForJSON;
- (id)trafficString;

@end
