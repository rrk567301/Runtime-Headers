@class NSNumber, NSString;

@interface SAUIRequestEndBehavior : AceObject <SAAceSerializable>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSNumber *minimumAutoDismissalTimeInMs;
@property (nonatomic) char premptivelyResumeMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (id)encodedClassName;

@end
