@class NSString, UnitRanks;

@interface CalculateToken : NSObject

@property (retain, nonatomic) NSString *normalizedText;
@property (nonatomic) char needsWhitespaceAfter;
@property (nonatomic) char loadedNeedsWhitespaceAfter;
@property (nonatomic) int characterType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) unsigned long long tokenType;
@property (readonly, nonatomic) NSString *text;
@property (retain, nonatomic) UnitRanks *ranks;
@property (readonly) char isOperand;
@property (readonly) char isOperator;
@property (readonly) char isOpen;
@property (readonly) char isMaybeX;
@property (readonly) char isPotentialVariable;
@property (readonly) char isAnyUnknown;

+ (id)tokenWithType:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 text:(id)a2 ranks:(id)a3;
+ (char)isOpen:(unsigned long long)a0;
+ (char)isClose:(unsigned long long)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setTokenType:(unsigned long long)a0;
- (char)isClose;
- (id)initWithType:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 text:(id)a2 ranks:(id)a3;
- (char)isXVariable;

@end
