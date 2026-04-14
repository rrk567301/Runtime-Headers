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
+ (BOOL)supportsAutoCalculatedValues;
+ (id)autoCalculatedInputKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)inputSpots;
- (void)setOperationDefaults;
- (BOOL)needsInputImageWithoutGeometry;
- (BOOL)needsFullSizeMaster;
- (BOOL)isVideoCompatible;
- (void)_applyAutoSettings:(id)a0;
- (BOOL)allowDough;
- (unsigned long long)spotCount;
- (id)spotAtIndex:(unsigned long long)a0;
- (void)setSpot:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceObjectInInputSpotsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectFromInputSpotsAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 inInputSpotsAtIndex:(unsigned long long)a1;
- (void)setInputSpots:(id)a0;
- (id)processImage:(id)a0 options:(id)a1;
- (void)deleteSpotAtIndex:(unsigned long long)a0;
- (void)addSpot:(id)a0;

@end
