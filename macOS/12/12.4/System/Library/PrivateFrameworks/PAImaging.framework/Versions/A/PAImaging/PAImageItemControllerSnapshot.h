@class PHContentEditingInput, DGDescription, NUComposition;

@interface PAImageItemControllerSnapshot : NSObject

@property (retain) DGDescription *renderDescription;
@property (retain) NUComposition *composition;
@property (retain) PHContentEditingInput *contentEditingInput;
@property BOOL hideVideoComplement;
@property unsigned short internalVideoComplementVisibility;
@property BOOL isExplicitVisibility;

- (void).cxx_destruct;

@end
