@class NSString;

@interface IMSimulatedMessageTextPart : IMSimulatedMessagePart

@property (readonly, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;
+ (id)type;

- (id)initWithText:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
