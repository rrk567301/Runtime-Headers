@interface NSFaultHandler : NSObject

+ (void)initialize;
+ (char)accessInstanceVariablesDirectly;

- (id)fulfillFault:(id)a0 withContext:(id)a1 forIndex:(unsigned long long)a2;

@end
