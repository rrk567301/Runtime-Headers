@class NSString;

@interface CALNNotificationIdentifier : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;
+ (id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)a0;
+ (id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStringRepresentation:(id)a0;
- (id)initWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1;
- (id)initWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1 stringRepresentation:(id)a2;
- (char)isEqualToNotificationIdentifier:(id)a0;

@end
