@class NSString, NSArray;

@interface DGiPhotoRedEyeOperation : DGOperation <DGAutoCalculable> {
    NSArray *_inputSpots;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;
+ (id)autoCalculatedInputKeys;
+ (char)supportsAutoCalculatedValues;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (void)_applyAutoSettings:(id)a0;
- (void)addSpot:(id)a0;
- (char)allowDough;
- (void)deleteSpotAtIndex:(unsigned long long)a0;
- (id)inputSpots;
- (void)insertObject:(id)a0 inInputSpotsAtIndex:(unsigned long long)a1;
- (char)isVideoCompatible;
- (char)needsFullSizeMaster;
- (char)needsInputImageWithoutGeometry;
- (id)processImage:(id)a0 options:(id)a1;
- (void)removeObjectFromInputSpotsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInInputSpotsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)setInputSpots:(id)a0;
- (void)setOperationDefaults;
- (void)setSpot:(id)a0 atIndex:(unsigned long long)a1;
- (id)spotAtIndex:(unsigned long long)a0;
- (unsigned long long)spotCount;

@end
