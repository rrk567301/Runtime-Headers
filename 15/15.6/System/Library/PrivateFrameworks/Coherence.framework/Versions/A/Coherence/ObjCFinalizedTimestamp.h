@class NSString, ObjCReplica;

@interface ObjCFinalizedTimestamp : NSObject {
    void /* unknown type, empty encoding */ timestamp;
}

@property (nonatomic, readonly) ObjCReplica *replica;
@property (nonatomic, readonly) long long counter;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReplica:(id)a0 counter:(long long)a1;
- (char)isGreaterThanTimestamp:(id)a0;

@end
