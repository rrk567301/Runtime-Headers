@class NSArray;

@interface CalculateUnitCollection : NSObject

@property (class, readonly) NSArray *expectedCategoryNames;

@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *locales;

+ (id)collectionWithLocales:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)findCategoryWithName:(id)a0;
- (id)findUnitWithName:(id)a0;
- (id)initWithLocales:(id)a0;

@end
