@class NSMutableArray;

@interface SCRWebStitchedTextLine : NSObject

@property (retain, nonatomic) NSMutableArray *phrases;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addPhrase;
- (id)lastPhrase;

@end
