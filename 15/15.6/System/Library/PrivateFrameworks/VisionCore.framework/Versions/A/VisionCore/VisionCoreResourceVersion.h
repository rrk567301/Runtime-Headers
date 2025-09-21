@class NSString;

@interface VisionCoreResourceVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned int major;
@property (readonly, nonatomic) unsigned int minor;
@property (readonly, nonatomic) unsigned int micro;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)versionForStringRepresentation:(id)a0;
+ (id)invalidVersion;
+ (id /* block */)newerFirstComparator;
+ (id /* block */)olderFirstComparator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMajor:(unsigned int)a0;
- (id)initWithMajor:(unsigned int)a0 minor:(unsigned int)a1 micro:(unsigned int)a2;
- (id)initWithMajor:(unsigned int)a0 minor:(unsigned int)a1;
- (char)isEqualToResourceVersion:(id)a0;

@end
