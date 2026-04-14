@class NSSet, NSMutableDictionary;

@interface _LTGenmojiReplacementManager : NSObject {
    NSMutableDictionary *_infoMap;
}

@property (class, readonly, nonatomic) NSSet *rareEmojiPlaceholderCandidates;

- (void).cxx_destruct;
- (id)init;
- (void)addReplacementInfo:(id)a0;
- (id)replacementInfoForRequestID:(id)a0;

@end
