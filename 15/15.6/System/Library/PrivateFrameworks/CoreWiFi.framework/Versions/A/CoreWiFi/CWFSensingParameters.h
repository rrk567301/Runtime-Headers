@class NSString, NSArray;

@interface CWFSensingParameters : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long numberOfReports;
@property (nonatomic) int matchFrameType;
@property (copy, nonatomic) NSArray *matchMACAddresses;
@property (nonatomic) long long timeout;
@property (nonatomic) char submitMetric;
@property (nonatomic) long long scheduleOnceAfter;
@property (nonatomic) long long scheduleDailyAt;
@property (copy, nonatomic) NSArray *activityLabels;
@property (copy, nonatomic) NSArray *placeLabels;
@property (copy, nonatomic) NSString *comment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (char)isEqualToSensingParameters:(id)a0;

@end
