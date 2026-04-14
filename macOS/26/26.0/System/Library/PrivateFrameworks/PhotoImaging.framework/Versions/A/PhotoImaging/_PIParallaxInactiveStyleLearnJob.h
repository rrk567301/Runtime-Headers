@class NSError, NSData, NSObject;
@protocol OS_dispatch_group;

@interface _PIParallaxInactiveStyleLearnJob : NURenderJob

@property (retain, nonatomic) NSObject<OS_dispatch_group> *learnGroup;
@property (retain, nonatomic) NSError *learnError;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } learnFrame;
@property (retain, nonatomic) NSData *styleData;

- (id)result;
- (void).cxx_destruct;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;
- (id)inactiveStyleLearnRequest;

@end
