@class NSString;

@interface PKPaymentTransactionPresentationInformation : NSObject

@property (retain, nonatomic) NSString *primaryString;
@property (retain, nonatomic) NSString *secondaryString;
@property (retain, nonatomic) NSString *tertiaryString;
@property (nonatomic) char destructiveSecondaryString;
@property (retain, nonatomic) NSString *badgeString;
@property (retain, nonatomic) NSString *valueString;
@property (nonatomic) char shouldGrayValue;
@property (nonatomic) char shouldStrikeValue;
@property (nonatomic) char shouldShowDisclosure;
@property (retain, nonatomic) NSString *secondaryBadgeSymbol;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
