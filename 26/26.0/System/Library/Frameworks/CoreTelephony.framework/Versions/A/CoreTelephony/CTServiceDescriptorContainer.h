@class NSArray;

@interface CTServiceDescriptorContainer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *descriptors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDescriptors:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
