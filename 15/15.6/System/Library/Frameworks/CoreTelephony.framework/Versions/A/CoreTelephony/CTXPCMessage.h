@class NSSet, NSDictionary;

@interface CTXPCMessage : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *allowedClassesForArguments;
@property (class, readonly, nonatomic, getter=isSensitiveMessage) char sensitiveMessage;
@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *namedArguments;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNamedArguments:(id)a0;

@end
