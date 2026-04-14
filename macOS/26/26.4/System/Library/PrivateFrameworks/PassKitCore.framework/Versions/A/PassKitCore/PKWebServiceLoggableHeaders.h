@class NSDictionary;

@interface PKWebServiceLoggableHeaders : NSObject {
    NSDictionary *_headers;
}

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)redactedDescription;
- (id)_descriptionIncludingPrivateFields:(BOOL)a0;
- (id)initWithHeaders:(id)a0;

@end
