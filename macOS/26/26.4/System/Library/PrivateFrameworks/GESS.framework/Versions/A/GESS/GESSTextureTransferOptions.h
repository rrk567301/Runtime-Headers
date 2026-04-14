@interface GESSTextureTransferOptions : NSObject

@property long long inputTangentialSpaceType;
@property long long outputTangentialSpaceType;
@property (copy) id /* block */ normalConversionFromTangentSpaceToObjectSpaceCallback;
@property (copy) id /* block */ normalConversionFromObjectSpaceToTangentSpaceCallback;

- (void).cxx_destruct;
- (id)init;

@end
