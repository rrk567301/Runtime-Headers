@class NSDictionary;

@interface PKWebServiceLoggableHeaders : NSObject {
    NSDictionary *_headers;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)_descriptionIncludingPrivateFields:(BOOL)a0;
- (id)initWithHeaders:(id)a0;

@end
