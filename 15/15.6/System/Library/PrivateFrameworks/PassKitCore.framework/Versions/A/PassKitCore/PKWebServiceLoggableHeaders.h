@class NSDictionary;

@interface PKWebServiceLoggableHeaders : NSObject {
    NSDictionary *_headers;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)_descriptionIncludingPrivateFields:(char)a0;
- (id)initWithHeaders:(id)a0;

@end
