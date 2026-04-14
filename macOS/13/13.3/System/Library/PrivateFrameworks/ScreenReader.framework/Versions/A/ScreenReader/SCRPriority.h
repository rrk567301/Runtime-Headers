@interface SCRPriority : NSObject

@property (nonatomic) long long priority;
@property (retain, nonatomic) id representedObject;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithRepresentedObject:(id)a0 priority:(long long)a1;

@end
