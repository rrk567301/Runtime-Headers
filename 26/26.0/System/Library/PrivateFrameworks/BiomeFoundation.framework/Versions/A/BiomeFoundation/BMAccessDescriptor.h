@class NSString, BMResourceSpecifier;

@interface BMAccessDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) BMResourceSpecifier *resource;
@property (readonly, nonatomic) NSString *personaIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)accessDescriptorWithAccessMode:(unsigned long long)a0;
- (id)initWithDomain:(unsigned long long)a0 accessMode:(unsigned long long)a1 resource:(id)a2;

@end
