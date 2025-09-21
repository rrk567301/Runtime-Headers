@class NSUUID, NSArray;

@interface _HDHealthConceptAuthorizationRequest : NSObject {
    id /* block */ _completionHandler;
    NSUUID *_identifier;
    NSArray *_userAnnotatedMedications;
    NSUUID *_sessionIdentifier;
}

- (void).cxx_destruct;

@end
