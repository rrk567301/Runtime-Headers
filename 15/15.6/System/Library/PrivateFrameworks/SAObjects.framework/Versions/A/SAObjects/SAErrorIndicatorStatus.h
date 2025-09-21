@class NSArray, NSString;

@interface SAErrorIndicatorStatus : AceObject <SABackgroundContextObject>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char deviceFixingProblems;
@property (copy, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorIndicatorStatus;
+ (id)errorIndicatorStatusWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
