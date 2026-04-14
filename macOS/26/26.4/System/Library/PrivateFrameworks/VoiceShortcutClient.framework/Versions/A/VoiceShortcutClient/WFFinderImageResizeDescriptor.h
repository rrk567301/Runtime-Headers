@class NSString;

@interface WFFinderImageResizeDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long format;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) BOOL preserveMetadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithFormat:(unsigned long long)a0 size:(unsigned long long)a1 preserveMetadata:(BOOL)a2;

@end
