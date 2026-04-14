@class VUWTag;

@interface VUWRecognition : NSObject

@property (nonatomic) float score;
@property (nonatomic, retain) VUWTag *tag;
@property (nonatomic) long long matchType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithScore:(float)a0 tag:(id)a1 matchType:(long long)a2;

@end
