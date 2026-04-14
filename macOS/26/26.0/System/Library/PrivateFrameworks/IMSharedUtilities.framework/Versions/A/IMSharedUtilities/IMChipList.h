@class NSArray;

@interface IMChipList : NSObject <IMAttributableContent> {
    void /* function */ chipList;
}

@property (nonatomic, readonly) NSArray *chipList;
@property (nonatomic, readonly) BOOL replied;

+ (id)merge:(id)a0 with:(id)a1;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)messageItem;
- (id)initWithChipArray:(id)a0;
- (id)initWithChipArray:(id)a0 replied:(BOOL)a1;
- (id)initWithChipList:(id)a0;
- (id)initWithChipList:(id)a0 replied:(BOOL)a1;
- (id)relayDictionaryRepresentation;
- (id)suggestedActions;
- (id)suggestedReplies;

@end
