@class NSSet;

@interface PLAssetCollectionGenerationResult : NSObject

@property (readonly, nonatomic) NSSet *insertedOrUpdatedMoments;
@property (readonly, nonatomic) char frequentLocationsDidChange;

- (void).cxx_destruct;
- (id)initWithInsertedOrUpdatedMoments:(id)a0 frequentLocationsDidChange:(char)a1;

@end
