@class NSDictionary;

@interface PKWebServiceLoggableHeaders : NSObject {
    NSDictionary *_headers;
}

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)init;
- (id)_descriptionIncludingPrivateFields:(BOOL)a0;
- (id)initWithHeaders:(id)a0;

@end
