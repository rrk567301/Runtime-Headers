@interface CNEmailAddressScanner : NSObject

- (id)firstEmailAddressInString:(id)a0;
- (void)enumerateEmailAddressesInString:(id)a0 usingBlock:(id /* block */)a1;
- (void)withEmailAddressesInString:(id)a0 each:(id /* block */)a1;

@end
