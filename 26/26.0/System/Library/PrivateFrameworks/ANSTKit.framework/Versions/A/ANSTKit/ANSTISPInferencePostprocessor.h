@class NSArray;

@interface ANSTISPInferencePostprocessor : ANSTInferencePostprocessor {
    struct { struct { unsigned char numModels; char codeVersion[20]; char name[4][20]; char version[4][20]; unsigned char rsvd[32]; } modelInfo; unsigned int frameId; unsigned int numFaces; struct { unsigned int objectId; unsigned int groupId; int category; struct { float x; float y; float width; float height; } bbox; unsigned int confidence; float distance; int yaw; int roll; int refinedYaw; int refinedRoll; int refinedPitch; int smile; int blinkLeft; int blinkRight; struct { float x; float y; float width; float height; } eyeRectLeft; struct { float x; float y; float width; float height; } eyeRectRight; unsigned char hasPoseData; unsigned char hasEyeData; unsigned char hasBlinkData; unsigned char hasSmileData; unsigned char isFrontal; unsigned int unmatchedFrameCount; struct { float x; float y; float width; float height; } rawBbox; unsigned char unConfImageBoundaryFace; unsigned int faceMaskConfidence; unsigned char hasSubjectIdMap; float subjectIdMap[64]; unsigned char hasFacialLandmarkData; unsigned int eyeCoveringConfidence; int skintoneTypeI; int skintoneTypeII; int skintoneTypeIII; int skintoneTypeIV; int skintoneTypeV; int skintoneTypeVI; int skintoneFWConfidence; int skintoneFWTypeI; int skintoneFWTypeII; int skintoneFWTypeIII; int skintoneFWTypeIV; unsigned char hasSkinToneData; struct { float x; float y; float radius; } facialLandmarks[98]; struct { float x; float y; float radius; } facialLandmarksV2[98]; int modality; } faces[10]; unsigned int numObjects; struct { unsigned int objectId; unsigned int groupId; int category; struct { float x; float y; float width; float height; } bbox; unsigned int confidence; float distance; int modality; } objects[40]; int smudgeConfidence; unsigned int numSaliencyObjects; struct { unsigned int objectId; unsigned int groupId; int category; struct { float x; float y; float width; float height; } bbox; unsigned int confidence; float distance; int modality; } saliencyObjects[1]; struct { unsigned char data[3072]; unsigned short width; unsigned short height; unsigned short rowBytes; unsigned char valid; } saliencyHeatMap; int networkType; } _acResult;
    NSArray *_anstOutputDescriptors;
    struct { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_anstOutputs;
}

@property (readonly, nonatomic) float smudgeConfidence;
@property (nonatomic) struct CGSize { double width; double height; } originalImageSize;

+ (BOOL)getInputImageAcOrientation:(int *)a0 fromPixelBuffer:(id)a1 withError:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_recursiveBatchAccessOfANSTTensorOutputDataCurrentIndex:(unsigned long long)a0 skipIndexSet:(id)a1 block:(id /* block */)a2;
- (struct { struct { unsigned char x0; char x1[20]; char x2[4][20]; char x3[4][20]; unsigned char x4[32]; } x0; unsigned int x1; unsigned int x2; struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; struct { float x0; float x1; float x2; float x3; } x14; struct { float x0; float x1; float x2; float x3; } x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned int x21; struct { float x0; float x1; float x2; float x3; } x22; unsigned char x23; unsigned int x24; unsigned char x25; float x26[64]; unsigned char x27; unsigned int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; unsigned char x40; struct { float x0; float x1; float x2; } x41[98]; struct { float x0; float x1; float x2; } x42[98]; int x43; } x3[10]; unsigned int x4; struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; } x5[40]; int x6; unsigned int x7; struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; float x5; int x6; } x8[1]; struct { unsigned char x0[3072]; unsigned short x1; unsigned short x2; unsigned short x3; unsigned char x4; } x9; int x10; } *)acResult;
- (void)accessANSTOutputsAsBmBuffersWithSkipIndexSet:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithInferenceInputDescriptors:(id)a0 inferenceOutputDescriptors:(id)a1 processedOutputDescriptors:(id)a2 error:(id *)a3;
- (BOOL)prewarmBmBuffersForANSTOutputDescriptors:(id)a0 error:(id *)a1;
- (id)semanticSegmentationMaskDescriptorOfCategory:(id)a0;
- (id)trackedObjectsOfCategory:(id)a0;

@end
