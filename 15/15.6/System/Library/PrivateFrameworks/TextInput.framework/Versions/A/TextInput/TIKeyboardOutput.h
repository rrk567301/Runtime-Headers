@class NSString, TIKeyboardCandidate, NSIndexSet, NSMutableDictionary;

@interface TIKeyboardOutput : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (copy, nonatomic) NSString *textToCommit;
@property (nonatomic) char unmarkIfNecessary;
@property (nonatomic) long long positionOffset;
@property (nonatomic) unsigned long long deletionCount;
@property (copy, nonatomic) NSString *insertionText;
@property (nonatomic) unsigned long long forwardDeletionCount;
@property (copy, nonatomic) NSString *insertionTextAfterSelection;
@property (retain, nonatomic) TIKeyboardCandidate *shortcutConversion;
@property (copy, nonatomic) NSIndexSet *handwritingStrokesToDelete;
@property (nonatomic) char shouldSendCurrentLocation;
@property (retain, nonatomic) NSMutableDictionary *customInfo;
@property (nonatomic) char producedByDeleteInput;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)deleteBackward:(unsigned long long)a0;
- (void)deleteForward:(unsigned long long)a0;
- (void)insertText:(id)a0;
- (void)deleteBackward;
- (void)deleteForward;
- (void)insertTextAfterSelection:(id)a0;

@end
