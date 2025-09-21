@class INIntentSlotDescription, INIntent;
@protocol INIntentResolutionResultDataProviding, INIntentParameterOptionsProviding;

@interface INResolutionResultTransformationOperation : NSOperation {
    char _finished;
    char _executing;
}

@property (readonly, nonatomic) id<INIntentResolutionResultDataProviding> result;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) INIntentSlotDescription *intentSlotDescription;
@property (readonly, nonatomic) id<INIntentParameterOptionsProviding> optionsProvider;
@property (copy, nonatomic) id /* block */ returnBlock;

- (void).cxx_destruct;
- (void)start;
- (char)isExecuting;
- (char)isFinished;
- (id)initWithResult:(id)a0 intent:(id)a1 intentSlotDescription:(id)a2 optionsProvider:(id)a3;

@end
