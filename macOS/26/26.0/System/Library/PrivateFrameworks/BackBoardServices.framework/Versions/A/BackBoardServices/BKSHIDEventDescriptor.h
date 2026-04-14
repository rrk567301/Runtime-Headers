@class NSString;

@interface BKSHIDEventDescriptor : NSObject <BSDescriptionStreaming, NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int hidEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)appendDescriptorArray:(id)a0 toDescriptionStream:(id)a1;
+ (id)descriptorForHIDEvent:(struct __IOHIDEvent { } *)a0;
+ (id)descriptorWithEventType:(unsigned int)a0;

- (id)initWithEventType:(unsigned int)a0;
- (void)appendDescriptionToStream:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)requiresFuzzyMatching;
- (long long)compare:(id)a0;
- (id)init;
- (BOOL)describes:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)a0;
- (BOOL)matchesHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)_initWithEventType:(unsigned int)a0;

@end
