@class NSString, NSDictionary, NSDate, NSNumber;

@interface WLKEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *legID;
@property (readonly, nonatomic) NSString *externalPlayableID;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *serviceID;
@property (readonly, nonatomic) NSString *externalServiceID;
@property (readonly, nonatomic) unsigned long long airingType;
@property (readonly, nonatomic) NSString *airingTypeString;
@property (readonly, nonatomic) NSDate *canonicalStartDate;
@property (readonly, nonatomic) NSNumber *cleanupTime;
@property (readonly, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *nowPlayingPassThrough;
@property (readonly, nonatomic) unsigned long long contentType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
