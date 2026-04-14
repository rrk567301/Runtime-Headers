@interface SGQuickResponsesCategoryScore : NSObject {
    unsigned long long _modelCount;
}

@property (readonly, nonatomic) double average;
@property (readonly, nonatomic) double maximum;

- (void)addScore:(double)a0;
- (id)init;

@end
