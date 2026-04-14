@class NSString, _ANEModel;

@interface _ANEVirtualModel : NSObject

@property (nonatomic) long long refcount;
@property (retain, nonatomic) _ANEModel *model;
@property (retain, nonatomic) NSString *tmpModelFilesPath;
@property (retain, nonatomic) NSString *tmpWeightFilesPath;

+ (id)new;
+ (void)initialize;
+ (id)objectWithModel:(id)a0;
+ (id)objectWithModel:(id)a0 tmpModelFilesPath:(id)a1 tmpWeightFilesPath:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (void)addCachedReference;
- (id)initWithModel:(id)a0 tmpModelFilesPath:(id)a1 tmpWeightFilesPath:(id)a2;
- (BOOL)removeCachedReference;
- (void)updateTmpWeightFilesPath:(id)a0;

@end
