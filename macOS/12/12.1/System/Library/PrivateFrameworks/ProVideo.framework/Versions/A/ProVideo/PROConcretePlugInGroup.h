@class NSString, NSMutableDictionary, NSMutableArray, NSLock;

@interface PROConcretePlugInGroup : NSObject {
    NSMutableArray *plugIns;
    struct __CFUUID { } *uuidRef;
    NSString *name;
    NSString *displayName;
    NSMutableDictionary *protocols;
    NSLock *mutex;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (struct __CFUUID { } *)uuid;
- (id)displayName;
- (id)uuidString;
- (id)plugIns;
- (void)addPlugIn:(id)a0;
- (id)plugInsForProtocols:(id)a0;
- (BOOL)isEqualToPlugInGroup:(id)a0;
- (id)initWithUUID:(struct __CFUUID { } *)a0 name:(id)a1 bundle:(id)a2;
- (void)removePlugIn:(id)a0;

@end
