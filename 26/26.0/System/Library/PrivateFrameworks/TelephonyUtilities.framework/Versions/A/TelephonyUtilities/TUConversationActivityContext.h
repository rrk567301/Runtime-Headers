@class NSString;

@interface TUConversationActivityContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *typedIdentifier;
@property (copy, nonatomic) NSString *actionDescription;
@property (copy, nonatomic) NSString *ongoingDescription;
@property (copy, nonatomic) NSString *completedDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *analyticsIdentifier;
@property (readonly, nonatomic, getter=isMedia) BOOL media;

+ (id)mediaContextIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContextIdentifier:(id)a0 actionDescription:(id)a1 ongoingDescription:(id)a2 completedDescription:(id)a3;
- (BOOL)isEqualToActivityContext:(id)a0;

@end
