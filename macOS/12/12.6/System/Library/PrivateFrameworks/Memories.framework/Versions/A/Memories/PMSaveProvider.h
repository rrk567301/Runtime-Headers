@class VEKProduction;

@interface PMSaveProvider : NSObject

@property (retain, nonatomic) VEKProduction *production;

- (void).cxx_destruct;
- (void)save:(BOOL)a0;
- (id)initWithProduction:(id)a0;

@end
