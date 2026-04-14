@class NSSet, NSMutableDictionary, MLMultiArray, NSString;

@interface CIMLFeatureProvider : NSObject <MLFeatureProvider> {
    MLMultiArray *multiArray;
    struct __CVBuffer { } *buffer;
    NSString *name;
}

@property (retain, nonatomic) NSMutableDictionary *contents;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)init;
- (id)featureValueForName:(id)a0;
- (void)dealloc;
- (void)addOject:(id)a0 forName:(id)a1;

@end
