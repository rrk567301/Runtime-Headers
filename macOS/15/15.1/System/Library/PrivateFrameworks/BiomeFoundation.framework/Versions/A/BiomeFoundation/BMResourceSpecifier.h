@class NSString, NSArray;

@interface BMResourceSpecifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSArray *descriptors;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 name:(id)a1;
- (id)_initWithType:(unsigned long long)a0 name:(id)a1 descriptors:(id)a2;
- (id)initWithType:(unsigned long long)a0 name:(id)a1 descriptors:(id)a2;

@end
