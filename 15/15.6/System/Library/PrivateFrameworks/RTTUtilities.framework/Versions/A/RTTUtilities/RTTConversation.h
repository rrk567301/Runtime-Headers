@class NSString, NSMutableArray, TUCall;

@interface RTTConversation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *callIdentifier;
@property (retain, nonatomic) NSMutableArray *utterances;
@property (retain, nonatomic) TUCall *call;

+ (id)conversationWithCall:(id)a0;
+ (void)conversationWithCall:(id)a0 withCallback:(id /* block */)a1;
+ (void)conversationWithCallUID:(id)a0 withCallback:(id /* block */)a1;
+ (id)conversationWithID:(id)a0 andUtterances:(id)a1;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToConversation:(id)a0;
- (id)addTranscriptionFromOtherContactPath:(id)a0;
- (void)addUtterance:(id)a0;
- (id)appendCharacter:(unsigned short)a0;
- (id)appendStringFromOtherContactPath:(id)a0;
- (id)lastUtteranceForMe:(char)a0;
- (id)lastUtteranceForMe:(char)a0 isTranscription:(char)a1;
- (unsigned long long)lastUtteranceIndexForMe:(char)a0 isTranscription:(char)a1;
- (id)mergeUtterancesIfPossible;
- (id)otherContactPath;
- (id)processBackspaceForMe:(char)a0;
- (id)updateTranscriptionFromOtherContactPath:(id)a0;
- (unsigned long long)utteranceCountForMe:(char)a0;

@end
