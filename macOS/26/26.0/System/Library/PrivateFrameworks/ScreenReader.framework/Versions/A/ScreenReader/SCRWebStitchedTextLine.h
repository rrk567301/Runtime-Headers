@class NSMutableArray;

@interface SCRWebStitchedTextLine : NSObject

@property (retain, nonatomic) NSMutableArray *phrases;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addPhrase;
- (id)lastPhrase;

@end
