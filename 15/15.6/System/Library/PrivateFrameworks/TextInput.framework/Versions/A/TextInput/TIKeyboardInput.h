@class NSString, TIHandwritingStrokes, TIKeyboardOutput, TIKeyboardCandidate, TIKeyboardTouchEvent;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface TIKeyboardInput : NSObject <NSSecureCoding> {
    union { long long integerValue; struct { unsigned char uppercase : 1; unsigned char autoshifted : 1; unsigned char popupVariant : 1; unsigned char multitap : 1; unsigned char flick : 1; unsigned char gesture : 1; unsigned char synthesizedByAcceptingCandidate : 1; unsigned char doubleSpace : 1; unsigned char rapidDelete : 1; unsigned char shiftDown : 1; unsigned char expandSegment : 1; unsigned char shrinkSegment : 1; } fields; } _flags;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) TIKeyboardOutput *output;
@property (copy, nonatomic) id<NSCopying, NSObject, NSSecureCoding> object;
@property (copy, nonatomic) TIHandwritingStrokes *handwritingStrokes;
@property (nonatomic, getter=isExpandSegment) char expandSegment;
@property (nonatomic, getter=isShrinkSegment) char shrinkSegment;
@property (nonatomic, getter=isBackspace) char backspace;
@property (nonatomic, getter=isUppercase) char uppercase;
@property (nonatomic, getter=isAutoshifted) char autoshifted;
@property (nonatomic, getter=isPopupVariant) char popupVariant;
@property (nonatomic, getter=isMultitap) char multitap;
@property (nonatomic, getter=isFlick) char flick;
@property (nonatomic, getter=isGesture) char gesture;
@property (nonatomic, getter=isSynthesizedByAcceptingCandidate) char synthesizedByAcceptingCandidate;
@property (nonatomic, getter=isDoubleSpace) char doubleSpace;
@property (nonatomic, getter=isRapidDelete) char rapidDelete;
@property (nonatomic, getter=isShiftDown) char shiftDown;
@property (retain, nonatomic) TIKeyboardTouchEvent *touchEvent;
@property (nonatomic) long long transliterationType;
@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (copy, nonatomic) NSString *inputManagerHint;
@property (nonatomic) double timestamp;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
