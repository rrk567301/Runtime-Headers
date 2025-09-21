@class NSString;

@interface TUConversationActivityContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *typedIdentifier;
@property (copy, nonatomic) NSString *actionDescription;
@property (copy, nonatomic) NSString *ongoingDescription;
@property (copy, nonatomic) NSString *completedDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *analyticsIdentifier;
@property (readonly, nonatomic, getter=isMedia) char media;

+ (id)mediaContextIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContextIdentifier:(id)a0 actionDescription:(id)a1 ongoingDescription:(id)a2 completedDescription:(id)a3;
- (char)isEqualToActivityContext:(id)a0;

@end
