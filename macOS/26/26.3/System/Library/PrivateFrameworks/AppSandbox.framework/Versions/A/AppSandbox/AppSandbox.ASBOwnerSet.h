@class NSString;

@interface AppSandbox.ASBOwnerSet : NSObject {
    void /* unknown type, empty encoding */ members;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) BOOL isEmpty;

+ (id)ownerSetWithSerialization:(id)a0 error:(id *)a1;

- (void)addIdentity:(id)a0;
- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)allowsBinaryIdentity:(id)a0;
- (BOOL)allowsInternalEquivalentBinaryIdentity:(id)a0;

@end
