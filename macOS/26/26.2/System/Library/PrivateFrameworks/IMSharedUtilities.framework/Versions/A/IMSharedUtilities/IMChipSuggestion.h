@class NSString;

@interface IMChipSuggestion : NSObject <IMAttributableContent> {
    void /* function */ displayText;
    void /* function */ postback;
    void /* function */ inReplyToID;
}

@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, copy) NSString *postback;
@property (nonatomic, copy) NSString *inReplyToID;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithDisplayText:(id)a0 postback:(id)a1 inReplyToID:(id)a2;

@end
