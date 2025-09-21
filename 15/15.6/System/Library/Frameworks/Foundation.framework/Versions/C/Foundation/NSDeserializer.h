@interface NSDeserializer : NSObject

+ (id)deserializePropertyListFromData:(id)a0 atCursor:(unsigned int *)a1 mutableContainers:(char)a2;
+ (id)deserializePropertyListFromData:(id)a0 mutableContainers:(char)a1;
+ (id)deserializePropertyListLazilyFromData:(id)a0 atCursor:(unsigned int *)a1 length:(unsigned int)a2 mutableContainers:(char)a3;

@end
