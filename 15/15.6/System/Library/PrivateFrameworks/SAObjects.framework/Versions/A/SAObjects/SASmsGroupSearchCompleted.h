@class NSArray, NSString;

@interface SASmsGroupSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *smsGroups;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupSearchCompleted;
+ (id)groupSearchCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
