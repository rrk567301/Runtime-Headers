@interface PHAPhotoVisionPhotoKitBridge : NSObject

+ (id)newAssetFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)pvFaceFromPHFace:(id)a0 copyPropertiesOption:(long long)a1;
+ (id)pvFacesArrayFromPHFetchResult:(id)a0 copyPropertiesOption:(long long)a1;
+ (id)phFacesFromPVFaces:(id)a0 withFetchOptions:(id)a1;
+ (id)phFaceFromPVFace:(id)a0 withFetchOptions:(id)a1;
+ (void)assignPropertiesOfPVFace:(id)a0 toPHFaceChangeRequest:(id)a1;
+ (id)phFaceprintFromPVFaceprint:(id)a0;
+ (id)pvFaceCropFromPHFaceCrop:(id)a0;
+ (id)phFaceCropsFromPVFaceCrops:(id)a0 withFetchOptions:(id)a1;
+ (id)phFaceCropFromPVFaceCrop:(id)a0 withFetchOptions:(id)a1;
+ (id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)pvFaceprintFromPHFaceprint:(id)a0;
+ (id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)vnFaceAttributeAgeToPHFaceAgeTypeMap;
+ (id)vnFaceAttributeSexToPHFaceSexTypeMap;
+ (id)vnFaceAttributeEyesToPHEyesStateMap;
+ (id)vnFaceAttributeSmileToPHFaceSmileTypeMap;
+ (id)vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+ (id)vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+ (id)vnFaceAttributeBaldToPHFaceBaldTypeMap;
+ (id)vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+ (unsigned short)phFaceAgeTypeFromPVFace:(id)a0;
+ (unsigned short)phFaceSexFromPVFace:(id)a0;
+ (unsigned short)phFaceEyesStateFromPVFace:(id)a0;
+ (unsigned short)phFaceSmileTypeFromPVFace:(id)a0;
+ (unsigned short)phFaceFacialHairTypeFromPVFace:(id)a0;
+ (unsigned short)phFaceHairColorTypeFromPVFace:(id)a0;
+ (unsigned short)phFaceGlassesTypeFromPVFace:(id)a0;
+ (unsigned short)phFaceBaldTypeFromPVFace:(id)a0;

@end
