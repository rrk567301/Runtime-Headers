@class PNRPhoneNumberResolutionResultSet;

@interface GEOPhoneNumberResolutionResultSet : NSObject {
    PNRPhoneNumberResolutionResultSet *_pnrResultSet;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithPNRResultSet:(id)a0;
- (void)enumerateResolutionsUsingBlock:(id /* block */)a0;

@end
