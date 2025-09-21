@interface QTMetadataItem : NSObject <NSCopying, NSMutableCopying, NSCoding>

+ (void)initialize;
+ (id)metadataItemsFromArray:(id)a0 withKey:(id)a1 keySpace:(id)a2;
+ (id)metadataItemsFromArray:(id)a0 withLocale:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttributes:(id)a0 value:(id)a1;
- (id)initWithKey:(id)a0 keySpace:(id)a1 locale:(id)a2 time:(struct { long long x0; long long x1; long long x2; })a3 value:(id)a4 extraAttributes:(id)a5;

@end
