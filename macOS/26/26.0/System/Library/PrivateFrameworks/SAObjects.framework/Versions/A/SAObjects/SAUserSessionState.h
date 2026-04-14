@class NSNumber, NSString;

@interface SAUserSessionState : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *isHighConfidenceSession;
@property (copy, nonatomic) NSNumber *isSessionActiveForRecognizedUser;
@property (copy, nonatomic) NSString *userSessionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (id)encodedClassName;

@end
