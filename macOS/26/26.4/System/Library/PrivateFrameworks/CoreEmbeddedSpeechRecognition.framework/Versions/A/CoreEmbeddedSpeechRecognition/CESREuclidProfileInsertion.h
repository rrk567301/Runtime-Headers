@class NSString;

@interface CESREuclidProfileInsertion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *field;
@property (readonly, nonatomic) NSString *itemType;
@property (readonly, nonatomic) NSString *sharedItemIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithField:(id)a0 itemType:(id)a1 sharedItemIdentifier:(id)a2;

@end
