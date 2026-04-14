@class NSArray, NSString, NSLocale, TIWordEntryAligned;

@interface TITypingSessionAligned : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *alignedEntries;
@property (retain, nonatomic) NSString *alignedText;
@property (retain, nonatomic) NSString *highConfAlignedSubSegment;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL containsCPEntries;
@property (nonatomic) unsigned long long firstCPEntryIndex;
@property (readonly, nonatomic) NSArray *layouts;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) TIWordEntryAligned *unfinishedEntry;
@property (readonly, nonatomic) NSString *completeText;

+ (id)resolveBackspacesInKeyboardInputs:(id)a0;
+ (id)alignedEntryForWord:(id)a0;
+ (id)alignedPathTouchesForWord:(id)a0;
+ (id)completeStringFromWordEntry:(id)a0 leadingInputs:(id)a1 trailingInputs:(id)a2 followsContinuousPath:(BOOL)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (id)restrictedAlignedSessionWithWordLimit:(unsigned long long)a0;
- (void)computeAlignedWordsFromSession:(id)a0;
- (void)getAlignedTextAndConfidence;
- (BOOL)compareForConfidenceContextA:(id)a0 contextB:(id)a1;
- (BOOL)isNewLineScenarioWithCurrentWord:(id)a0 andPreviousWord:(id)a1;
- (id)textToAppendForEntry:(id)a0 sessionIndx:(unsigned long long)a1;

@end
