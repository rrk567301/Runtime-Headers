@class NSSet, NSMutableDictionary;

@interface _LTGenmojiReplacementManager : NSObject {
    NSMutableDictionary *_infoMap;
}

@property (class, readonly, nonatomic) NSSet *rareEmojiPlaceholderCandidates;

- (id)init;
- (void).cxx_destruct;
- (void)addReplacementInfo:(id)a0;
- (id)replacementInfoForRequestID:(id)a0;

@end
