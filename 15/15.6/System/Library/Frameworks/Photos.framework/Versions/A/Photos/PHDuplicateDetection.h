@interface PHDuplicateDetection : NSObject

+ (char)assetsArePendingForDuplicateMergeProcessing:(id)a0 inPhotoLibrary:(id)a1;
+ (void)mergeDuplicateAssetWithLocalIdentifierGroupingContainer:(id)a0 inPhotoLibrary:(id)a1 completionHandler:(id /* block */)a2;

@end
