@class NSArray, NSDictionary, NSSet;

@interface PXStoryTimeBasedChapterCollection : NSObject <PXStoryEditableChapterCollection>

@property (readonly, nonatomic) NSArray *chapters;
@property (readonly, nonatomic) NSDictionary *chapterIndexesByIdentifier;
@property (readonly, nonatomic) NSSet *chapterBeginningAssetLocalIdentifiers;
@property (readonly, nonatomic) char usesAssetLocalCreationDates;
@property (readonly, nonatomic) long long numberOfChapters;

- (id)init;
- (void).cxx_destruct;
- (id)_dateForAsset:(id)a0;
- (id)chapterAtIndex:(long long)a0;
- (id)_initWithChapters:(id)a0 usesAssetLocalCreationDates:(char)a1;
- (char)canApplyEdits:(id)a0 error:(id *)a1;
- (id)chapterContainingAsset:(id)a0;
- (char)containsChapterBeginningWithAsset:(id)a0;
- (id)copyByApplyingEdits:(id)a0;
- (void)enumerateChaptersUsingBlock:(id /* block */)a0;
- (long long)indexOfChapterWithIdentifier:(id)a0;
- (id)initWithAssets:(id)a0 keyAsset:(id)a1 configuration:(id /* block */)a2;

@end
