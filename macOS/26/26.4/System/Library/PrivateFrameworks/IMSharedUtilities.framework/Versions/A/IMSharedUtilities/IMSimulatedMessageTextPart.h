@class NSString;

@interface IMSimulatedMessageTextPart : IMSimulatedMessagePart

@property (readonly, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;
+ (id)type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;

@end
