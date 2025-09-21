@class NSString;

@interface OSPIONode : NSObject

@property (retain) NSString *nodePath;
@property unsigned int entry;

- (id)stringForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)dealloc;
- (id)dataForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned int)unsignedIntForKey:(id)a0;
- (unsigned char)byteForKey:(id)a0;
- (id)initWithNodePath:(id)a0;
- (unsigned long long)unsignedLongLongForKey:(id)a0;

@end
