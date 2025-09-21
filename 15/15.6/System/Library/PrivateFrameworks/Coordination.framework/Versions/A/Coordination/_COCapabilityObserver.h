@class NSString;

@interface _COCapabilityObserver : NSObject

@property (readonly, copy, nonatomic) id /* block */ block;
@property (nonatomic) char notified;
@property (nonatomic) char lastValue;
@property (readonly, copy, nonatomic) NSString *capability;
@property (readonly, copy, nonatomic) id cluster;

- (id)description;
- (void).cxx_destruct;
- (void)notify:(char)a0;
- (id)initWithCapability:(id)a0 cluster:(id)a1 block:(id /* block */)a2;

@end
