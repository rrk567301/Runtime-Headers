@interface PESerializationUtility : NSObject

+ (char)adjustmentDataIsSupported:(id)a0;
+ (id)compositionControllerForContentEditingInput:(id)a0 asShot:(char)a1 error:(id *)a2;
+ (id)compositionControllerForContentEditingInput:(id)a0 asShot:(char)a1 source:(id)a2 error:(id *)a3;
+ (id)contentEditingOutputForContentEditingInput:(id)a0 compositionController:(id)a1 asset:(id)a2 async:(char)a3 onlyChangingOriginalChoice:(char)a4;
+ (id)editSourceForContentEditingInput:(id)a0 error:(id *)a1;
+ (id)exportCompositionController:(id)a0 forContentEditingOutput:(id)a1 settings:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
+ (long long)_playbackStyleForAutoLoopController:(id)a0;
+ (unsigned short)_playbackVariationForAutoLoopController:(id)a0;
+ (id)editSourceForContentEditingInput:(id)a0 useEmbeddedPreview:(char)a1 error:(id *)a2;
+ (id)editSourceForContentEditingInput:(id)a0 useRawDisplaySizeImage:(char)a1 useEmbeddedPreview:(char)a2 error:(id *)a3;

@end
