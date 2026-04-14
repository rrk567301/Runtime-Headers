@class NSString, _TtC9Coherence11ObjCReplica;

@interface Coherence.ObjCFinalizedTimestamp : NSObject {
    void /* unknown type, empty encoding */ timestamp;
}

@property (nonatomic, readonly) _TtC9Coherence11ObjCReplica *replica;
@property (nonatomic, readonly) long long counter;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReplica:(id)a0 counter:(long long)a1;
- (BOOL)isGreaterThanTimestamp:(id)a0;

@end
