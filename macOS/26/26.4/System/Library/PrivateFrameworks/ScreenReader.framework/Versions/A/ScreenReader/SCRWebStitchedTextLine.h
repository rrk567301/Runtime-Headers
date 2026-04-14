@class NSMutableArray;

@interface SCRWebStitchedTextLine : NSObject

@property (retain, nonatomic) NSMutableArray *phrases;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)addPhrase;
- (id)lastPhrase;

@end
