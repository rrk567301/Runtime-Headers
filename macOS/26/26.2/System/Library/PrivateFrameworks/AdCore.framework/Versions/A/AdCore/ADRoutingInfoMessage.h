@class NSString;
@protocol ADCorePreferencesStoring;

@interface ADRoutingInfoMessage : NSObject

@property (nonatomic) unsigned long long routingInfoType;
@property (retain, nonatomic) id<ADCorePreferencesStoring> storage;
@property (readonly, nonatomic) NSString *environmentURL;
@property (readonly, nonatomic) NSString *payload;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRoutingType:(unsigned long long)a0 preferencesStore:(id)a1;
- (id)dictionaryRepresentation;

@end
