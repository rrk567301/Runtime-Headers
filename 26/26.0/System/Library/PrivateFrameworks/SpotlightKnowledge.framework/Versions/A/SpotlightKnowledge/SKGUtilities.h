@interface SKGUtilities : NSObject

@property (class, readonly) SKGUtilities *sharedSKGUtilities;

- (id)init;
- (id)getSKGDictionary:(id)a0 filterBundle:(id)a1 protectionClasses:(id)a2 processorFlags:(unsigned long long)a3;

@end
