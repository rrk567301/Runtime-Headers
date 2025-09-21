@class NSDOStreamData, NSMutableArray;

@interface NSUnkeyedPortCoder : NSConcretePortCoder {
    id sndPort;
    id rcvPort;
    NSDOStreamData *doStreamData;
    NSMutableArray *components;
    NSMutableArray *importedObjects;
    unsigned long long componentIndex;
    BOOL isBycopy;
    BOOL isByref;
    BOOL isValid;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_enableLogging:(BOOL)a0;

- (void)encodeByrefObject:(id)a0;
- (id)components;
- (id)debugDescription;
- (void)dealloc;
- (void)invalidate;
- (id)decodeDataObject;
- (void)encodeDataObject:(id)a0;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)a0;
- (void)encodePropertyList:(id)a0;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (long long)versionForClassName:(id)a0;
- (id)connection;
- (id)decodePropertyList;
- (void)encodeBycopyObject:(id)a0;
- (id)importedObjects;
- (BOOL)isByref;
- (id)_proxyForLocalObject:(id)a0;
- (id)decodeInvocation;
- (id)decodePortObject;
- (id)decodeRetainedObject;
- (void)decodeReturnValue:(id)a0;
- (void)dispatch;
- (void)encodeInvocation:(id)a0;
- (void)encodeObject:(id)a0 isBycopy:(BOOL)a1 isByref:(BOOL)a2;
- (void)encodePortObject:(id)a0;
- (void)encodeReturnValue:(id)a0;
- (id)finishedComponents;
- (void)importObject:(id)a0;
- (id)initWithReceivePort:(id)a0 sendPort:(id)a1 components:(id)a2;
- (BOOL)isBycopy;

@end
