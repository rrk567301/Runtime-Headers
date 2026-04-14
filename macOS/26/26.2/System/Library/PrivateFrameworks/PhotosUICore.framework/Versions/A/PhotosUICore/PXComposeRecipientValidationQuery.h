@class NSString, PXComposeRecipient;

@interface PXComposeRecipientValidationQuery : NSObject <NSCopying>

@property (readonly, nonatomic) PXComposeRecipient *composeRecipient;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) long long addressKind;
@property (nonatomic) long long validationType;

+ (id)new;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithComposeRecipient:(id)a0 address:(id)a1 addressKind:(long long)a2;

@end
