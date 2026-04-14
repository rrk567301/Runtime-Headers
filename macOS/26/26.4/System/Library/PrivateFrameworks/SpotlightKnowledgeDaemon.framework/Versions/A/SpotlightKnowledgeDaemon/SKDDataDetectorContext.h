@class NSArray, NSCharacterSet;

@interface SKDDataDetectorContext : SKDModelContext

@property (readonly, nonatomic) NSCharacterSet *punctuation;
@property (readonly, nonatomic) NSArray *supportedCategories;

- (void).cxx_destruct;
- (id)init;

@end
