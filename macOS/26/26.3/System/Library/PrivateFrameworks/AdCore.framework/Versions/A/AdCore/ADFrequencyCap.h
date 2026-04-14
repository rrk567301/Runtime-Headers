@class NSString;

@interface ADFrequencyCap : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *adMetadata;
@property (nonatomic) long long downloadType;
@property (nonatomic) double setTime;

- (id)initWithIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (id)splitCapData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
