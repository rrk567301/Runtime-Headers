@class NSArray;

@interface IMChipList : NSObject <IMAttributableContent> {
    void /* function */ chipList;
}

@property (nonatomic, readonly) NSArray *chipList;
@property (nonatomic, readonly) BOOL replied;
@property (nonatomic, readonly) long long hash;

+ (id)merge:(id)a0 with:(id)a1;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)messageItem;
- (id)initWithChipArray:(id)a0;
- (id)initWithChipArray:(id)a0 replied:(BOOL)a1;
- (id)initWithChipList:(id)a0;
- (id)initWithChipList:(id)a0 replied:(BOOL)a1;
- (id)relayDictionaryRepresentation;
- (id)suggestedActions;
- (id)suggestedReplies;

@end
