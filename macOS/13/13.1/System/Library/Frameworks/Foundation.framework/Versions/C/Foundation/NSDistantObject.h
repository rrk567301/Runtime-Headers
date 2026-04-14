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
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (Class)class;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copy;
- (BOOL)conformsToProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (struct _NSZone { } *)zone;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendFormat:(id)a0;
- (id)stringByAppendingFormat:(id)a0;
- (id)initWithTarget:(id)a0 connection:(id)a1;
- (id)initWithLocal:(id)a0 connection:(id)a1;
- (void)setProtocolForProxy:(id)a0;
- (id)protocolForProxy;
- (void)_releaseWireCount:(unsigned long long)a0;
- (void)retainWireCount;

@end
