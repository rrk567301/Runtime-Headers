@class NSString, NSMutableArray, TUCall;

@interface RTTConversation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *callIdentifier;
@property (retain, nonatomic) NSMutableArray *utterances;
@property (retain, nonatomic) TUCall *call;

+ (id)conversationWithCall:(id)a0;
+ (void)conversationWithCallUID:(id)a0 withCallback:(id /* block */)a1;
+ (void)conversationWithCall:(id)a0 withCallback:(id /* block */)a1;
+ (id)conversationWithID:(id)a0 andUtterances:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (BOOL)isEqualToConversation:(id)a0;
- (void)addUtterance:(id)a0;
- (id)appendStringFromOtherContactPath:(id)a0;
- (id)lastUtteranceForMe:(BOOL)a0;
- (id)otherContactPath;
- (id)processBackspaceForMe:(BOOL)a0;
- (id)mergeUtterancesIfPossible;
- (id)appendCharacter:(unsigned short)a0;
- (unsigned long long)utteranceCountForMe:(BOOL)a0;

@end
