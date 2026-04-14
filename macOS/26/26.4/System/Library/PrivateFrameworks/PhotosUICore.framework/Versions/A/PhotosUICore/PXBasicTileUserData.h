@class PXViewSpec;

@interface PXBasicTileUserData : NSObject

@property (readonly, nonatomic) PXViewSpec *viewSpec;

+ (id)userDataWithViewSpec:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)_initWithViewSpec:(id)a0;

@end
