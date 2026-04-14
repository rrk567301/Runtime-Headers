@class NSString;

@interface PXRecipientTransport : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) long long addressKind;

+ (id)new;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithAddress:(id)a0 addressKind:(long long)a1;

@end
