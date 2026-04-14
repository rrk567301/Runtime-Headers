@class NSArray, VNRequestSpecifier, NSDictionary;

@interface VNDetectionprint : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding, VNOriginatingRequestSpecifierProviding> {
    NSDictionary *_tensorsDictionary;
    VNRequestSpecifier *_originatingRequestSpecifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *tensorKeys;
@property (readonly, nonatomic) unsigned long long requestRevision;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

+ (id)knownTensorKeysForRequestRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)tensorShapeForKey:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithTensorsDictionary:(id)a0 originatingRequestSpecifier:(id)a1;
- (id)initWithTensorsDictionary:(id)a0 requestRevision:(unsigned long long)a1;
- (id)tensorForKey:(id)a0 error:(id *)a1;

@end
