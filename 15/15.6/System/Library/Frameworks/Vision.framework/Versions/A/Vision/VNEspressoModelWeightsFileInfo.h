@class NSString;

@interface VNEspressoModelWeightsFileInfo : NSObject

@property (readonly, nonatomic) NSString *weightsFilePath;
@property (readonly) char weightsFileExists;
@property (readonly) char isRegularWeightsFile;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 exists:(char)a1 isRegular:(char)a2;

@end
