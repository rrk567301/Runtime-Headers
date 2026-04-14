@class NSUUID;

@interface Coherence.ObjCReplica : NSObject {
    void /* unknown type, empty encoding */ uuid;
}

@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic) long long index;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUuid:(id)a0 index:(long long)a1;

@end
