@class NSString;

@interface PXRecipientTransport : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) long long addressKind;

+ (id)new;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 addressKind:(long long)a1;

@end
