@class NSUUID;

@interface IOBluetoothObject : NSObject <NSCopying> {
    unsigned int mIOService;
    unsigned int mIOConnection;
    unsigned int mIONotification;
}

@property (retain, nonatomic) NSUUID *identifier;

+ (void)initialize;
+ (id)getUniqueObjectWithKey:(id)a0;
+ (void)addUniqueObject:(id)a0;
+ (void)removeUniqueObject:(id)a0;
+ (id)getUniqueObjectDictionary:(BOOL)a0;
+ (id)getKeyForIOService:(unsigned int)a0;
+ (id)withIOService:(unsigned int)a0;
+ (void)uniqueObjectDictionaryEmpty;
+ (id)getUniqueObjectWithIOService:(unsigned int)a0;
+ (id)getAllUniqueObjects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)getKey;
- (unsigned int)getIOService;
- (int)closeKernelConnection;
- (void)setIOService:(unsigned int)a0;
- (int)establishKernelConnection;
- (id)initWithIOService:(unsigned int)a0;
- (int)unregisterForServiceRemovalNotification;
- (void)updateFromNewIOService:(unsigned int)a0;
- (int)registerForServiceRemovalNotification;
- (BOOL)ioServiceTerminated:(unsigned int)a0;

@end
