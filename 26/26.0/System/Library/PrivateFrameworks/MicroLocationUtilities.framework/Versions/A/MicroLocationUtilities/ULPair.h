@interface ULPair : NSObject

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
