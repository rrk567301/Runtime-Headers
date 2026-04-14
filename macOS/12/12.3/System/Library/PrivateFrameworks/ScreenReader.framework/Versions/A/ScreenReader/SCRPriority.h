@interface SCRPriority : NSObject

@property (nonatomic) long long priority;
@property (retain, nonatomic) id representedObject;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithRepresentedObject:(id)a0 priority:(long long)a1;

@end
