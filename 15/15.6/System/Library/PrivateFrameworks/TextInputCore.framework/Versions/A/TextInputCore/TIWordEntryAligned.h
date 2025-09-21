@class NSArray, NSString, TIWordEntry;

@interface TIWordEntryAligned : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *alignedTouches;
@property (retain, nonatomic) NSArray *alignedKeyboardInputs;
@property (copy, nonatomic) NSString *expectedString;
@property (copy, nonatomic) NSString *completeString;
@property (retain, nonatomic) TIWordEntry *originalWord;
@property (nonatomic) char isContinuousPathConversion;
@property (nonatomic) int inSessionAlignmentConfidence;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
