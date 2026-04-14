@class NUPriority, NSString, NUColorSpace, PIBrushStrokeHistory;
@protocol NUScalePolicy;

@interface PICompositionExporterOptions : NSObject

@property (retain) NUPriority *priority;
@property (retain) NUColorSpace *colorSpace;
@property (copy) NSString *pairingIdentifier;
@property (retain) id<NUScalePolicy> scalePolicy;
@property (nonatomic) BOOL exportSidecarData;
@property (retain) PIBrushStrokeHistory *brushStrokeHistory;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
