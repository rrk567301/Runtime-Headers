@class NSDictionary;

@interface PKWebServiceLoggableHeaders : NSObject {
    NSDictionary *_headers;
}

- (id)redactedDescription;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)_descriptionIncludingPrivateFields:(BOOL)a0;
- (id)initWithHeaders:(id)a0;

@end
