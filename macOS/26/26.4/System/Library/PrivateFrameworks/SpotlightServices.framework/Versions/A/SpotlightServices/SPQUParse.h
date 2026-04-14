@class NSString, NSArray, NSDictionary, NSNumber;

@interface SPQUParse : NSObject

@property (retain, nonatomic) NSString *intentLabel;
@property (retain, nonatomic) NSNumber *intentLabelId;
@property (retain, nonatomic) NSNumber *isPQA;
@property (retain, nonatomic) NSString *entityString;
@property (retain, nonatomic) NSArray *tokenArguments;
@property (retain, nonatomic) NSDictionary *encodedDict;
@property (retain, nonatomic) NSArray *filterTypes;
@property (retain, nonatomic) NSArray *preferredTypes;
@property (retain, nonatomic) NSArray *eventTypes;
@property (nonatomic) BOOL hasPerson;

+ (id)filterTypeEnums;
+ (id)personTypeEnums;
+ (id)eventTypeEnums;
+ (id)photosAndNonPhotosAppEntityTypeEnums;
+ (id)photosAppEntityTypeEnums;
+ (id)preferredTypeEnums;

- (void).cxx_destruct;
- (id)tokensForLabel:(id)a0;
- (void)addSPQUArguments:(id)a0;
- (id)getEncodedData;
- (id)initWithIntentLabel:(id)a0 tokenArguments:(id)a1;
- (id)initWithIntentLabel:(id)a0 tokenArguments:(id)a1 isPQA:(BOOL)a2;
- (BOOL)isEventType:(long long)a0;
- (BOOL)isFilterType:(long long)a0;
- (BOOL)isPersonType:(long long)a0;
- (BOOL)isPhotosAndNonPhotosAppEntityType:(long long)a0;
- (BOOL)isPhotosAppEntityType:(long long)a0;
- (BOOL)isPreferredType:(long long)a0;
- (BOOL)postProcessWithPQAEntityTypes:(id)a0;

@end
