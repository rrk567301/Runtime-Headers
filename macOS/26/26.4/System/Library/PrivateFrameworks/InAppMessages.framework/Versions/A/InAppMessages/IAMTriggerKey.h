@class NSString;

@interface IAMTriggerKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *nameSpacedKeyName;

+ (id)nameSpacedKeyNameForName:(id)a0 bundleIdentifier:(id)a1;

- (id)initWithName:(id)a0 bundleIdentifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
