@class MLMultiArray;

@interface SLODLDInputTokenParams : NSObject

@property (retain, nonatomic) MLMultiArray *mlInputIds;
@property (retain, nonatomic) MLMultiArray *mlTypeIds;
@property (retain, nonatomic) MLMultiArray *mlAttnMask;
@property (retain, nonatomic) MLMultiArray *mlPadMask;

- (void).cxx_destruct;
- (id)initWithShape:(id)a0;
- (void)populateWithTokens:(id)a0;

@end
