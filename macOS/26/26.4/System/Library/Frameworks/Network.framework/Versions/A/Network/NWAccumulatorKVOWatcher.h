@class NSString, NSObject;

@interface NWAccumulatorKVOWatcher : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSString *state;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject *object;
@property (retain, nonatomic) NSString *keyPath;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)updateWithState:(id)a0;

@end
