@class NSCondition, TSULocale, NSMutableArray;

@interface TSUDateParserLibrary : NSObject {
    TSULocale *mLocale;
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)checkoutDateParser;
- (void)prepareDateParserInBackground;
- (void)returnDateParser:(id)a0;

@end
