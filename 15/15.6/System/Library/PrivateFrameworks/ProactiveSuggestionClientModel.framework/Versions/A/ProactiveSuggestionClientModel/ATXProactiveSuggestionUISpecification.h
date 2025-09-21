@class NSString, NSArray, NSDate;

@interface ATXProactiveSuggestionUISpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSArray *preferredLayoutConfigs;
@property (readonly, nonatomic) char allowedOnLockscreen;
@property (readonly, nonatomic) char allowedOnHomeScreen;
@property (readonly, nonatomic) char allowedOnSpotlight;
@property (readonly, nonatomic) char shouldClearOnEngagement;
@property (readonly, nonatomic) unsigned long long predictionReasons;
@property (readonly, nonatomic) NSDate *contextStartDate;
@property (readonly, nonatomic) NSDate *contextEndDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 preferredLayoutConfigs:(id)a2 allowedOnLockscreen:(char)a3 allowedOnHomeScreen:(char)a4 allowedOnSpotlight:(char)a5;
- (char)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 predictionReason:(id)a2 preferredLayoutConfigs:(id)a3 allowedOnLockscreen:(char)a4 allowedOnHomeScreen:(char)a5 allowedOnSpotlight:(char)a6 shouldClearOnEngagement:(char)a7 predictionReasons:(unsigned long long)a8;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 predictionReason:(id)a2 preferredLayoutConfigs:(id)a3 allowedOnLockscreen:(char)a4 allowedOnHomeScreen:(char)a5 allowedOnSpotlight:(char)a6 shouldClearOnEngagement:(char)a7 predictionReasons:(unsigned long long)a8 contextStartDate:(id)a9 contextEndDate:(id)a10;
- (char)checkAndReportDecodingFailureIfNeededForBOOL:(char)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 predictionReason:(id)a2 preferredLayoutConfigs:(id)a3 allowedOnLockscreen:(char)a4 allowedOnHomeScreen:(char)a5 allowedOnSpotlight:(char)a6 shouldClearOnEngagement:(char)a7;
- (id)jsonRawData;
- (char)fuzzyIsEqualToUISpecification:(id)a0;

@end
