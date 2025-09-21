@class NSString;

@interface TIContextChangeEvent : TIUserAction

@property (nonatomic) char isSelection;
@property (nonatomic) char extendsPriorWord;
@property (copy, nonatomic) NSString *inWord;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inWordRange;
@property (nonatomic) unsigned long long selectionLocation;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTIKeyboardState:(id)a0 andActionType:(int)a1;

@end
