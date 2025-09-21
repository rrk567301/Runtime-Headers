@interface MTLType : NSObject

@property (readonly) unsigned long long dataType;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;

@end
