@class NSArray, NSMutableArray;

@interface SKThreadSafeMutableArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _storageLock;
    NSMutableArray *_storage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak) NSArray *arrayRepresentation;

- (void)removeObjectsInArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithNSMutableArray:(id)a0;

@end
