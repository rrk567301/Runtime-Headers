@class NSString;

@interface RTIInputSourceState : NSObject <NSSecureCoding> {
    union { int integerValue; struct { unsigned char minimized : 1; unsigned char hardwareKeyboardMode : 1; unsigned char centerFilled : 1; unsigned char split : 1; unsigned char floating : 1; unsigned char showingEmojiSearch : 1; unsigned char showsCandidateBar : 1; unsigned char usesCandidateSelection : 1; unsigned char supportsSetPhraseBoundary : 1; } fields; } _inputSourceStateMask;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *inputMode;
@property (nonatomic) char minimized;
@property (nonatomic) char hardwareKeyboardMode;
@property (nonatomic) char centerFilled;
@property (nonatomic) char split;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftSplitFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightSplitFrame;
@property (nonatomic) char floating;
@property (nonatomic) char showingEmojiSearch;
@property (nonatomic) char supportsSetPhraseBoundary;
@property (nonatomic) char usesCandidateSelection;
@property (nonatomic) char showsCandidateBar;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
