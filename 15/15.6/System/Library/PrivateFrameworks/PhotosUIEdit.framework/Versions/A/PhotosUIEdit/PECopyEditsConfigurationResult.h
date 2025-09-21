@class NSDictionary, PICompositionController;

@interface PECopyEditsConfigurationResult : NSObject

@property (nonatomic) char smartCopyEnabled;
@property (retain, nonatomic) NSDictionary *analyticsPayload;
@property (readonly, nonatomic) PICompositionController *compositionController;

- (void).cxx_destruct;
- (id)initWithCompositionController:(id)a0;

@end
