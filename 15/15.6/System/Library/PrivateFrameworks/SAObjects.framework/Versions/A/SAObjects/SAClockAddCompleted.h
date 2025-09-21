@class NSURL, NSString;

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char alreadyExists;
@property (copy, nonatomic) NSURL *worldClockId;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addCompleted;
+ (id)addCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
