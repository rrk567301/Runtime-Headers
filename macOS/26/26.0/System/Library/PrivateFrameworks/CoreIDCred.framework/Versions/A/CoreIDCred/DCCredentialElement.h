@class NSDictionary, NSString, NSArray, NSData, NSDate, NSDateComponents, NSNumber;

@interface DCCredentialElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *elementIdentifier;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) NSDateComponents *birthDateValue;
@property (readonly, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) NSArray *arrayValue;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) unsigned long long numericTypeHint;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithElementIdentifier:(id)a0;
- (id)initWithElementIdentifier:(id)a0 arrayValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 birthDateValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 boolValue:(BOOL)a1;
- (id)initWithElementIdentifier:(id)a0 dataValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 dateValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 dictionaryValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 doubleValue:(double)a1;
- (id)initWithElementIdentifier:(id)a0 intValue:(long long)a1;
- (id)initWithElementIdentifier:(id)a0 stringValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 stringValue:(id)a1 dataValue:(id)a2 dateValue:(id)a3 birthDateValue:(id)a4 numberValue:(id)a5 arrayValue:(id)a6 dictionaryValue:(id)a7 numericTypeHint:(unsigned long long)a8;

@end
