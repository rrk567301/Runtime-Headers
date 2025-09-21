@class NSArray, BWFormatRequirements, NSString;

@interface BWNodeOutputMediaConfiguration : NSObject {
    NSString *_associatedAttachedMediaKey;
    NSArray *_indexesOfInputsWhichDrivesThisOutput;
    NSString *_attachedMediaKeyOfInputWhichDrivesThisOutput;
    int _indexOfInputWhichDrivesThisOutput;
    char _performsAttachedMediaRemapping;
}

@property (retain, nonatomic) BWFormatRequirements *formatRequirements;
@property (nonatomic) char providesPixelBufferPool;
@property (nonatomic) char providesDataBufferPool;
@property (nonatomic) char pixelBufferPoolProvidesBackPressure;
@property (nonatomic) char pixelBufferPoolReportSlowBackPressureAllocations;
@property (nonatomic) int passthroughMode;
@property (nonatomic) int indexOfInputWhichDrivesThisOutput;
@property (copy, nonatomic) NSArray *indexesOfInputsWhichDrivesThisOutput;
@property (readonly, nonatomic) char performsAttachedMediaRemapping;
@property (copy, nonatomic) NSString *attachedMediaKeyOfInputWhichDrivesThisOutput;
@property (nonatomic) int owningNodeRetainedBufferCount;
@property (nonatomic) int owningNodeIndefinitelyHeldBufferCount;

- (void)dealloc;
- (id)init;
- (void)_setAssociatedAttachedMediaKey:(id)a0;
- (char)isDrivenByInputWithIndex:(unsigned long long)a0;

@end
