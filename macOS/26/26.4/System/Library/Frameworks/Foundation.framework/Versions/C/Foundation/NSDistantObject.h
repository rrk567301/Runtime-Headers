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
+ (id)newDistantObjectWithCoder:(id)a0;
+ (id)proxyWithLocal:(id)a0 connection:(id)a1;
+ (id)proxyWithTarget:(id)a0 connection:(id)a1;

- (struct _NSZone { } *)zone;
- (id)mutableCopy;
- (BOOL)_tryRetain;
- (void)appendFormat:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)hash;
- (id)description;
- (oneway void)release;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (unsigned long long)retainCount;
- (Class)class;
- (id)stringByAppendingFormat:(id)a0;
- (void)retainWireCount;
- (void)_releaseWireCount:(unsigned long long)a0;
- (id)initWithLocal:(id)a0 connection:(id)a1;
- (id)initWithTarget:(id)a0 connection:(id)a1;
- (id)protocolForProxy;
- (void)setProtocolForProxy:(id)a0;

@end
