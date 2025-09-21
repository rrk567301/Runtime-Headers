@class NSString, TSPData, TSDAttribution;

@interface TSDMediaInfo : TSDStyledInfo <TSDFittingOnInsertion, TSDFileBasedInfo> {
    TSDAttribution *_attribution;
    struct { unsigned char isPlaceholder : 1; unsigned char wasMediaReplaced : 1; } _flags;
}

@property (nonatomic) struct CGSize { double width; double height; } originalSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } defaultOriginalSize;
@property (nonatomic) char isPlaceholder;
@property (nonatomic) char wasMediaReplaced;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } rawDataSize;
@property (readonly, nonatomic) char canResetMediaSize;
@property (readonly, nonatomic) char canBeMediaPlaceholder;
@property (readonly, nonatomic) char canBeReplaced;
@property (copy, nonatomic) TSDAttribution *attribution;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } centerForReplacingWithNewMedia;
@property (readonly, nonatomic) NSString *propertyNameForFlagsCommand;
@property (readonly, nonatomic) NSString *propertyNameForOriginalSizeCommand;
@property (readonly, nonatomic) unsigned short propertyIdForFlagsCommand;
@property (readonly, nonatomic) unsigned short propertyIdForOriginalSizeCommand;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } rawOriginalSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *fileDisplayName;
@property (readonly, nonatomic) NSString *fileType;
@property (readonly, nonatomic) TSPData *fileDataForDragging;

- (void).cxx_destruct;
- (void)setGeometry:(id)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (void)takePropertiesFromReplacedMediaInfo:(id)a0;
- (void)updateGeometryToReplaceMediaInfo:(id)a0;
- (id)copyToInstantiateTemplatePlaceholder;
- (id)defaultDescriptiveName;
- (void)scaleDownSizeToFitWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFlagsWithPlaceholder:(char)a0 wasMediaReplaced:(char)a1;

@end
