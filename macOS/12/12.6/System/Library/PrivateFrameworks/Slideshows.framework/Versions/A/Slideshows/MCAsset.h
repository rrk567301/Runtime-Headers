@class NSString;

@interface MCAsset : MCObject

@property (copy) NSString *path;
@property (readonly, nonatomic) BOOL isInUse;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;

@end
