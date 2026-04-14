@class NSString;
@protocol TFResolver;

@interface TFRouter : NSObject <TFRouter>

@property (readonly, nonatomic) id<TFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResolver:(id)a0;
- (id)resolveRoutable:(id)a0;

@end
