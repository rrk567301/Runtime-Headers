@class NSMutableArray;

@interface SCRWebStitchedTextLine : NSObject

@property (retain, nonatomic) NSMutableArray *phrases;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)addPhrase;
- (id)lastPhrase;

@end
