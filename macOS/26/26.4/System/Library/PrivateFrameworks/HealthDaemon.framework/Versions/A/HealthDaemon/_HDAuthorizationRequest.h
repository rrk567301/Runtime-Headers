@class NSUUID, NSSet;

@interface _HDAuthorizationRequest : NSObject {
    id /* block */ _completionHandler;
    NSUUID *_identifier;
    NSSet *_typesToWrite;
    NSSet *_typesToRead;
}

- (void).cxx_destruct;
- (id)description;

@end
