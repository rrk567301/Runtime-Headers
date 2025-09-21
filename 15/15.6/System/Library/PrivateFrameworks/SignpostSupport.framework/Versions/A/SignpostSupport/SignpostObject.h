@class NSString, NSDictionary, NSNumber;

@interface SignpostObject : SignpostSupportObject

@property (nonatomic) unsigned long long signpostId;
@property (nonatomic) unsigned long long scope;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *scopeString;
@property (nonatomic) char telemetryEnabled;
@property (retain, nonatomic) NSString *string1Name;
@property (retain, nonatomic) NSString *string1Value;
@property (retain, nonatomic) NSString *string2Name;
@property (retain, nonatomic) NSString *string2Value;
@property (retain, nonatomic) NSString *number1Name;
@property (retain, nonatomic) NSNumber *number1Value;
@property (retain, nonatomic) NSString *number2Name;
@property (retain, nonatomic) NSNumber *number2Value;

+ (id)serializationTypeNumber;

- (id)copy;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(char)a2;
- (id)_dictionaryRepresentationWithIsHumanReadable:(char)a0 shouldRedact:(char)a1;
- (id)initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2 signpostId:(unsigned long long)a3 scope:(unsigned long long)a4 timebaseRatio:(double)a5 attributes:(id)a6;

@end
