@class NSColor, NSString, NSData;

@interface NSFavoriteColorStoreEntry : NSObject <NSCopying>

@property (readonly) NSColor *color;
@property (readonly, copy) NSString *customColorClassName;
@property (readonly, copy) NSData *customColorData;

+ (id)entryWithColor:(id)a0;
+ (id)customEntryWithColorClassName:(id)a0 data:(id)a1 backstopColor:(id)a2;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)dealloc;
- (id)initWithColor:(id)a0 customClassName:(id)a1 customColorData:(id)a2;

@end
