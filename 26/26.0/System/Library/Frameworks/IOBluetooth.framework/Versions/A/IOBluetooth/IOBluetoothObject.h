@class NSUUID;

@interface IOBluetoothObject : NSObject <NSCopying> {
    unsigned int mIOService;
    unsigned int mIOConnection;
    unsigned int mIONotification;
}

@property (retain, nonatomic) NSUUID *identifier;

+ (void)initialize;
+ (void)addUniqueObject:(id)a0;
+ (id)getAllUniqueObjects;
+ (id)getKeyForIOService:(unsigned int)a0;
+ (id)getUniqueObjectDictionary:(BOOL)a0;
+ (id)getUniqueObjectWithIOService:(unsigned int)a0;
+ (id)getUniqueObjectWithKey:(id)a0;
+ (void)removeUniqueObject:(id)a0;
+ (void)uniqueObjectDictionaryEmpty;
+ (id)withIOService:(unsigned int)a0;

- (BOOL)isValid;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)getKey;
- (int)closeKernelConnection;
- (int)establishKernelConnection;
- (unsigned int)getIOService;
- (id)initWithIOService:(unsigned int)a0;
- (BOOL)ioServiceTerminated:(unsigned int)a0;
- (int)registerForServiceRemovalNotification;
- (void)setIOService:(unsigned int)a0;
- (int)unregisterForServiceRemovalNotification;
- (void)updateFromNewIOService:(unsigned int)a0;

@end
