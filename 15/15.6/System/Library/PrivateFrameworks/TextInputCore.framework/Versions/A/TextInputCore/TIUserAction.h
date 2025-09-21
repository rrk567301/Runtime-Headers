@class TIKeyboardState, TIDocumentState;

@interface TIUserAction : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double occurenceTime;
@property (nonatomic) int actionType;
@property (retain, nonatomic) TIDocumentState *documentState;
@property (retain, nonatomic) TIKeyboardState *keyboardState;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTIKeyboardState:(id)a0;

@end
