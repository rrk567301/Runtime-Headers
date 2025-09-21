@class NSUUID, NSString, NSDate;

@interface HMCameraRecordingReachabilityEvent : NSObject <HMCameraRecordingEvent, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, getter=isReachable) char reachable;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 dateOfOccurrence:(id)a1 reachable:(char)a2;

@end
