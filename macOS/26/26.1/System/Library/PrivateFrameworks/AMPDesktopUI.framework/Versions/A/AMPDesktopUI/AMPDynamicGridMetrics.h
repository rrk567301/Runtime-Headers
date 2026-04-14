@interface AMPDynamicGridMetrics : NSObject {
    unsigned long long _columnCounts[4];
}

@property (readonly, nonatomic) unsigned long long xsColumnCount;
@property (readonly, nonatomic) unsigned long long smallColumnCount;
@property (readonly, nonatomic) unsigned long long mediumColumnCount;
@property (readonly, nonatomic) unsigned long long largeColumnCount;

+ (id)gridCMetrics;
+ (id)gridGMetrics;
+ (id)gridHMetrics;

- (unsigned long long)columnCountForWidth:(double)a0;
- (id)initWithXSColumnCount:(unsigned long long)a0 small:(unsigned long long)a1 medium:(unsigned long long)a2 large:(unsigned long long)a3;

@end
