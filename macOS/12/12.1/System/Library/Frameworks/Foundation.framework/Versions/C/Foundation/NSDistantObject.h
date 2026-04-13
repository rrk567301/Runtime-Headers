@class NSConnection;

@interface NSDistantObject : NSProxy <NSCoding> {
    id _knownSelectors;
    unsigned long long _wireCount;
    unsigned long long _refCount;
    id _proto;
    unsigned short ___2;
    unsigned char ___1;
    unsigned char _wireType;
    id _remoteClass;
}

@property (readonly, retain) NSConnection *connectionForProxy;

+ (void)initialize;
+ (void)_enableLogging:(BOOL)a0;
+ (id)proxyWithTarget:(id)a0 connection:(id)a1;
+ (id)proxyWithLocal:(id)a0 connection:(id)a1;
+ (id)newDistantObjectWithCoder:(id)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (struct _NSZone { } *)zone;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)mutableCopy;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendFormat:(id)a0;
- (id)stringByAppendingFormat:(id)a0;
- (void)_releaseWireCount:(unsigned long long)a0;
- (void)retainWireCount;
- (id)initWithTarget:(id)a0 connection:(id)a1;
- (id)initWithLocal:(id)a0 connection:(id)a1;
- (void)setProtocolForProxy:(id)a0;
- (id)protocolForProxy;

@end
