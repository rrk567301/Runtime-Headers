@class NSArray;

@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket {
    NSArray *_phoneNumbers;
    char _allowCellularDataForLookup;
}

- (id)description;
- (void).cxx_destruct;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKind;
- (id)initWithPhoneNumbers:(id)a0 allowCellularDataForLookup:(char)a1 traits:(id)a2;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;

@end
