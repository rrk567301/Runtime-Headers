@class NSString, NSMutableDictionary;

@interface _NUPipelineEvaluationScope : NSObject {
    NSMutableDictionary *_channelData;
}

@property (readonly, copy, nonatomic) NSString *name;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (id)dataForChannel:(id)a0;
- (void)setChannelData:(id)a0;
- (id)channelData;
- (id)initWithName:(id)a0 channelData:(id)a1;
- (void)setData:(id)a0 forChannel:(id)a1;

@end
