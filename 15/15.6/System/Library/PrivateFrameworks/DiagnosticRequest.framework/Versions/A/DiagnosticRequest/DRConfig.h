@class NSString, NSUUID, NSData, NSDate, NSDictionary;

@interface DRConfig : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char payloadIsJSON;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *configDescription;
@property (readonly, nonatomic) NSUUID *configUUID;
@property (readonly, nonatomic) NSDate *receivedDate;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) NSDictionary *payloadDictionaryRepresentation;
@property (readonly, nonatomic) char skippedHysteresis;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToConfig:(id)a0;
- (id)initWithBuild:(id)a0 teamID:(id)a1 configDescription:(id)a2 configUUID:(id)a3 receivedDate:(id)a4 startDate:(id)a5 endDate:(id)a6 payload:(id)a7 payloadIsJSON:(char)a8 skipHysteresis:(char)a9;
- (id)initWithJSONDict:(id)a0 receivedDate:(id)a1;
- (id)jsonDictRepresentation;

@end
