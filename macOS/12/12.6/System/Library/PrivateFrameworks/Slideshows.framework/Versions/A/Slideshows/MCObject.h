@class NSString, MCMontage;

@interface MCObject : MCObjectBase

@property (readonly, nonatomic) NSString *objectID;
@property (readonly, nonatomic) MCMontage *montage;

+ (id)objectWithImprint:(id)a0 andMontage:(id)a1;

- (void)dealloc;
- (id)snapshot;
- (BOOL)isSnapshot;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initFromScratchWithMontage:(id)a0;
- (id)_initWithObjectID:(id)a0;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (id)initSnapshot;

@end
