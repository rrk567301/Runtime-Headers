@class NSArray, GEOPDPlaceResponse, GEOPDMIFAutocompleteRequest, NSData, GEOMIFAutocompleteRequestParameters;

@interface GEOMIFAutocompleteRequest : NSObject

@property (retain, nonatomic) GEOMIFAutocompleteRequestParameters *requestParameters;
@property (retain, nonatomic) GEOPDPlaceResponse *autocompleteServerResponse;
@property (retain, nonatomic) NSArray *clientEntries;
@property (retain, nonatomic) NSArray *serverEntries;
@property (retain, nonatomic) GEOPDMIFAutocompleteRequest *pdAutocompleteRequest;
@property (retain, nonatomic) NSData *serializedData;

- (id)debugDescription;
- (void).cxx_destruct;

@end
