@class NSString, NSError, NSMutableArray, NSNumber;
@protocol WBSCreditCardImporterDelegate;

@interface WBSCreditCardImporter : NSObject <WBSJSONReaderDelegate> {
    NSError *_lastError;
    NSMutableArray *_stack;
    char _foundCreditCardArray;
    NSString *_cardNumber;
    NSString *_cardName;
    NSString *_cardholderName;
    NSNumber *_expirationDateMonth;
    NSNumber *_expirationDateYear;
    NSNumber *_lastUsedDateTimeInterval;
}

@property (weak, nonatomic) id<WBSCreditCardImporterDelegate> delegate;

- (void).cxx_destruct;
- (char)parseURL:(id)a0 error:(id *)a1;
- (char)_checkNotAtRootLevel;
- (char)_isParsingCreditCard;
- (char)_isParsingCreditCardArray;
- (id)_popKeyFromStackIfPossible;
- (id)_sanitizedCardNumberFromImportedCardNumber:(id)a0;
- (char)jsonReader:(id)a0 appendKey:(id)a1;
- (char)jsonReader:(id)a0 error:(id)a1;
- (char)jsonReader:(id)a0 scalarValue:(id)a1;
- (char)jsonReaderBeginArray:(id)a0;
- (char)jsonReaderBeginObject:(id)a0;
- (char)jsonReaderEndArray:(id)a0;
- (char)jsonReaderEndObject:(id)a0;
- (char)parseFileHandle:(id)a0 error:(id *)a1;

@end
