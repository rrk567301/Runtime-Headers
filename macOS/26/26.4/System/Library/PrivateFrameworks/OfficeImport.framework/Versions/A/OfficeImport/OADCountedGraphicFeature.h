@interface OADCountedGraphicFeature : NSObject {
    id mFeature;
}

@property (nonatomic) unsigned long long usageCount;

- (id)feature;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFeature:(id)a0;
- (long long)compareUsageCount:(id)a0;
- (void)incrementUsageCount;

@end
