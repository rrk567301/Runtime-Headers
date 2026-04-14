@class MLMultiArray;

@interface CSEnhancedEndpointerInputVector : NSObject

@property (retain, nonatomic) MLMultiArray *mlInputVector;

- (void).cxx_destruct;
- (id)initWithShape:(id)a0;
- (void)populateVector:(id)a0;

@end
