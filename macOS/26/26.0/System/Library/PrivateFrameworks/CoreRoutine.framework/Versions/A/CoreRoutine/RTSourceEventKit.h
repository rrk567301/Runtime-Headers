@class NSString, NSDictionary, NSDate;

@interface RTSourceEventKit : RTSource

@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, nonatomic) NSString *suggestionInfo_opaqueKey;
@property (readonly, nonatomic) NSDictionary *suggestionsSchemaOrg;
@property (readonly, nonatomic) unsigned long long sharingStatus;
@property (readonly, nonatomic) BOOL tentative;
@property (readonly, nonatomic) BOOL participationOptional;

+ (BOOL)supportsSecureCoding;
+ (id)sharingStatusToString:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 location:(id)a4 allDay:(BOOL)a5 sharingStatus:(unsigned long long)a6;
- (id)initWithEventIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 location:(id)a4 allDay:(BOOL)a5 sharingStatus:(unsigned long long)a6 tentative:(BOOL)a7 participationOptional:(BOOL)a8 suggestionInfo_opaqueKey:(id)a9 suggestionsSchemaOrg:(id)a10;
- (id)initWithEventIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 title:(id)a3 location:(id)a4 allDay:(BOOL)a5 sharingStatus:(unsigned long long)a6 suggestionInfo_opaqueKey:(id)a7;

@end
