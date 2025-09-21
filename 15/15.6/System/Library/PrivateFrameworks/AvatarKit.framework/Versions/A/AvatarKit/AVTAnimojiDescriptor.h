@class NSString;

@interface AVTAnimojiDescriptor : AVTAvatarDescriptor

@property (copy, nonatomic) NSString *name;

+ (char)supportsSecureCoding;
+ (unsigned char)classIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (void)encodeInDictionaryRepresentation:(id)a0;
- (id)initWithAnimoji:(id)a0;

@end
