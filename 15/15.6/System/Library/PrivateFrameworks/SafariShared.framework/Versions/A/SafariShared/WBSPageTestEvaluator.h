@interface WBSPageTestEvaluator : NSObject

@property (readonly, nonatomic) char macOS;
@property (readonly, nonatomic) char iOS;
@property (readonly, nonatomic) char iPhone;
@property (readonly, nonatomic) char iPad;

- (char)vision;
- (char)macCatalyst;

@end
