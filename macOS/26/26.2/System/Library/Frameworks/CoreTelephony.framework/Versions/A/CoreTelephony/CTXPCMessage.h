@class NSSet, NSDictionary, NSString;

@interface CTXPCMessage : NSObject <NSSecureCoding, CTXPCLogging>

@property (class, readonly, nonatomic) NSSet *allowedClassesForArguments;
@property (class, readonly, nonatomic, getter=isSensitiveMessage) BOOL sensitiveMessage;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *namedArguments;
@property (readonly, nonatomic) NSString *ct_shortName;
@property (readonly, nonatomic) NSString *ct_shortDescription;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithNamedArguments:(id)a0;

@end
