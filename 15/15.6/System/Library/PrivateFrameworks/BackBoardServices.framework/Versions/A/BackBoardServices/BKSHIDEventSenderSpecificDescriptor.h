@class BKSHIDEventDescriptor;

@interface BKSHIDEventSenderSpecificDescriptor : BKSHIDEventDescriptor

@property (retain, nonatomic) BKSHIDEventDescriptor *sourceDescriptor;
@property (readonly) unsigned long long senderID;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToStream:(id)a0;
- (char)describes:(id)a0;
- (id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)a0;
- (id)initWithDescriptor:(id)a0 senderID:(unsigned long long)a1;
- (char)matchesHIDEvent:(struct __IOHIDEvent { } *)a0;
- (char)requiresFuzzyMatching;

@end
