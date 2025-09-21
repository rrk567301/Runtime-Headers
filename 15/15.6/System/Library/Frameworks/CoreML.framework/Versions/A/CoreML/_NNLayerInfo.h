@class NSString;

@interface _NNLayerInfo : NSObject

@property (readonly, nonatomic) char bidirectional;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *concatenatedInputNames;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 concatenatedInputNames:(id)a1 bidirectional:(char)a2;

@end
