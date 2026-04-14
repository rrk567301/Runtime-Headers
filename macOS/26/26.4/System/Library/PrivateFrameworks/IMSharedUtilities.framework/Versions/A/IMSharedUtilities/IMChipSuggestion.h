@class NSString;

@interface IMChipSuggestion : NSObject <IMAttributableContent> {
    void /* function */ displayText;
    void /* function */ postback;
    void /* function */ inReplyToID;
}

@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, copy) NSString *postback;
@property (nonatomic, copy) NSString *inReplyToID;
@property (nonatomic, readonly) long long hash;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDisplayText:(id)a0 postback:(id)a1 inReplyToID:(id)a2;

@end
