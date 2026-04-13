@class NSArray, NSMutableDictionary, NSURL, NSMutableSet, NSLock;

@interface KHProductManager : NSObject {
    NSMutableSet *_products;
    NSLock *_productsLock;
    NSMutableDictionary *_productsByProductCode;
    NSMutableDictionary *_productSetsByProjectType;
    NSMutableDictionary *_productSetsByProductType;
}

@property (retain, nonatomic) NSURL *productsURL;
@property (copy, nonatomic) NSArray *productCodeWhitelist;

+ (id)defaultManager;

- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)allProducts;
- (id)productForCode:(id)a0;
- (void)_loadProductsIfNecessary;
- (id)productsWithProjectType:(long long)a0;
- (void)resetProducts;
- (id)productsWithProductType:(long long)a0;
- (id)productCodesForProjectType:(long long)a0;

@end
