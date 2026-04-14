@class CNPostalAddress;

@interface ABAddressFieldValuePopulator : NSObject

@property (readonly) CNPostalAddress *postalAddress;

- (void).cxx_destruct;
- (id)initWithPostalAddress:(id)a0;
- (id)cardViewTagToValueKeypathMap;
- (id)valueForComponentKeypath:(id)a0;
- (void)populateAddressFields:(id)a0;

@end
