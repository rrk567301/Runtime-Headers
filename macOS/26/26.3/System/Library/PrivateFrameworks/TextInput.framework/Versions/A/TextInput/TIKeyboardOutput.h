@class NSString, TIKeyboardCandidate, NSIndexSet, NSMutableDictionary;

@interface TIKeyboardOutput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (copy, nonatomic) NSString *textToCommit;
@property (nonatomic) BOOL unmarkIfNecessary;
@property (nonatomic) long long positionOffset;
@property (nonatomic) unsigned long long deletionCount;
@property (copy, nonatomic) NSString *insertionText;
@property (nonatomic) unsigned long long forwardDeletionCount;
@property (copy, nonatomic) NSString *insertionTextAfterSelection;
@property (retain, nonatomic) TIKeyboardCandidate *shortcutConversion;
@property (copy, nonatomic) NSIndexSet *handwritingStrokesToDelete;
@property (nonatomic) BOOL shouldSendCurrentLocation;
@property (retain, nonatomic) NSMutableDictionary *customInfo;
@property (nonatomic) BOOL producedByDeleteInput;
@property (retain, nonatomic) NSString *delimitingPrefix;

- (void)deleteBackward;
- (void)insertText:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)insertTextAfterSelection:(id)a0;
- (void)deleteBackward:(unsigned long long)a0;
- (void)deleteForward:(unsigned long long)a0;
- (void)deleteForward;

@end
