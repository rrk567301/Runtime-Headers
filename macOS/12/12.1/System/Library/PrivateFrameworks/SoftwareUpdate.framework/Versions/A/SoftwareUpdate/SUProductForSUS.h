@class SUProduct;

@interface SUProductForSUS : NSObject {
    SUProduct *_product;
}

- (void)dealloc;
- (id)displayName;
- (id)displayVersion;
- (long long)restartAction;
- (unsigned long long)downloadSize;
- (id)initWithProductKey:(id)a0 catalogProductDictionary:(id)a1 localization:(id)a2 error:(id *)a3;
- (id)descriptionDataReturningMIMEType:(id *)a0;

@end
