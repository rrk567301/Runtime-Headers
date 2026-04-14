@class NSArray, NSMutableArray;
@protocol LACContextExternalizing;

@interface LACOwnerInfos : NSObject {
    NSMutableArray *_allInfos;
}

@property (readonly, nonatomic) NSArray *allInfos;
@property (readonly, weak, nonatomic) id<LACContextExternalizing> context;

- (void)cleanup;
- (void).cxx_destruct;
- (id)description;
- (void)addInfo:(id)a0;
- (id)initWithInfo:(id)a0 context:(id)a1;
- (unsigned long long)numberOfOwnersOtherThanPid:(int)a0;

@end
