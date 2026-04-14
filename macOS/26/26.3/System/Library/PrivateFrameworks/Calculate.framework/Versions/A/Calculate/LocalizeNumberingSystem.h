@class NSString, NSArray;

@interface LocalizeNumberingSystem : NSObject

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSArray *digits;
@property (retain, nonatomic) NSString *digitsString;
@property (nonatomic) BOOL allowForOutput;
@property (readonly, nonatomic) unsigned short zero;
@property (readonly, nonatomic) unsigned short suggestedGroupingSeparator;
@property (readonly, nonatomic) unsigned short suggestedDecimalSeparator;
@property (readonly, nonatomic) BOOL usesEastArabicDigits;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDigits:(id)a0 id:(id)a1;

@end
