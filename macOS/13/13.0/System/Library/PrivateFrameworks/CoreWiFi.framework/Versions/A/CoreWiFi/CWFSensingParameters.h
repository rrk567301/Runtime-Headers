@class NSString, NSArray;

@interface CWFSensingParameters : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long numberOfReports;
@property (nonatomic) int matchFrameType;
@property (copy, nonatomic) NSString *matchMACAddress;
@property (nonatomic) long long timeout;
@property (nonatomic) BOOL submitMetric;
@property (nonatomic) long long scheduleOnceAfter;
@property (nonatomic) long long scheduleDailyAt;
@property (copy, nonatomic) NSArray *activityLabels;
@property (copy, nonatomic) NSArray *placeLabels;
@property (copy, nonatomic) NSString *comment;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)JSONCompatibleKeyValueMap;
- (BOOL)isEqualToSensingParameters:(id)a0;

@end
