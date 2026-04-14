@class NSString, NSDictionary;

@interface IMSimulatedMessagePart : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSString *type;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (Class)partClassForType:(id)a0;
+ (id)partClasses;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
