@interface WFOnScreenContentExtractor : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } applicationFrame;
@property (nonatomic) long long applicationLevel;

- (id)responseWithError:(id)a0;
- (void)handleAction:(id)a0 completionHandler:(id /* block */)a1;
- (id)nodeWithContentCollection:(id)a0 file:(id)a1 linkPresentationMetadata:(id)a2;

@end
