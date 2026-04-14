@class NSUUID;

@interface IOBluetoothObject : NSObject <NSCopying> {
    unsigned int mIOService;
    unsigned int mIOConnection;
    unsigned int mIONotification;
}

@property (retain, nonatomic) NSUUID *identifier;

+ (void)initialize;
+ (id)getUniqueObjectDictionary:(BOOL)a0;
+ (id)getKeyForIOService:(unsigned int)a0;
+ (void)uniqueObjectDictionaryEmpty;
+ (id)getUniqueObjectWithIOService:(unsigned int)a0;
+ (id)getUniqueObjectWithKey:(id)a0;
+ (void)addUniqueObject:(id)a0;
+ (void)removeUniqueObject:(id)a0;
+ (id)getAllUniqueObjects;
+ (id)withIOService:(unsigned int)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)getKey;
- (id)initWithIOService:(unsigned int)a0;
- (void)setIOService:(unsigned int)a0;
- (unsigned int)getIOService;
- (void)updateFromNewIOService:(unsigned int)a0;
- (int)establishKernelConnection;
- (int)closeKernelConnection;
- (int)registerForServiceRemovalNotification;
- (int)unregisterForServiceRemovalNotification;
- (BOOL)ioServiceTerminated:(unsigned int)a0;

@end
