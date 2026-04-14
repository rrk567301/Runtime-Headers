@class NSSet;

@interface ULConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *contextLayers;
@property (nonatomic) unsigned long long predictionsUpdateType;
@property (nonatomic) unsigned long long deviceClass;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithContextLayers:(id)a0;

@end
