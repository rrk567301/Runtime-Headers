@class NSSet;

@interface ULConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *contextLayers;
@property (nonatomic) unsigned long long predictionsUpdateType;
@property (nonatomic) unsigned long long deviceClass;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContextLayers:(id)a0;

@end
