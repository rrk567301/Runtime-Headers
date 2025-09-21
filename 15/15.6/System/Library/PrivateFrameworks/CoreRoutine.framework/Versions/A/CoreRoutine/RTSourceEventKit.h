@class NSString, NSDictionary, NSDate;

@interface RTSourceEventKit : RTSource

@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic, getter=isAllDay) char allDay;
@property (readonly, nonatomic) NSString *suggestionInfo_opaqueKey;
@property (readonly, nonatomic) NSDictionary *suggestionsSchemaOrg;
@property (readonly, nonatomic) unsigned long long sharingStatus;

+ (char)supportsSecureCoding;
+ (id)sharingStatusToString:(unsigned long long)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 location:(id)a4 allDay:(char)a5 sharingStatus:(unsigned long long)a6;
- (id)initWithEventIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 location:(id)a4 allDay:(char)a5 sharingStatus:(unsigned long long)a6 suggestionInfo_opaqueKey:(id)a7 suggestionsSchemaOrg:(id)a8;
- (id)initWithEventIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 location:(id)a4 allDay:(char)a5 sharingStatus:(unsigned long long)a6 suggestionInfo_opaqueKey:(id)a7;

@end
