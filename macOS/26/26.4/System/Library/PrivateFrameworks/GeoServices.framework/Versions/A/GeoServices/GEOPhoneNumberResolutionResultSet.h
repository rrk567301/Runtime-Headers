@class PNRPhoneNumberResolutionResultSet;

@interface GEOPhoneNumberResolutionResultSet : NSObject {
    PNRPhoneNumberResolutionResultSet *_pnrResultSet;
}

- (void).cxx_destruct;
- (id)description;
- (void)enumerateResolutionsUsingBlock:(id /* block */)a0;
- (id)initWithPNRResultSet:(id)a0;

@end
