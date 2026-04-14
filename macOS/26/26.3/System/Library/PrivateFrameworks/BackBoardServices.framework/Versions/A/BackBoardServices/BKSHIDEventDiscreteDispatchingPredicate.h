@class NSSet, NSString;

@interface BKSHIDEventDiscreteDispatchingPredicate : NSObject <BSDescriptionStreaming, NSSecureCoding, NSCopying, NSMutableCopying> {
    NSSet *_fuzzyDescriptors;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *senderDescriptors;
@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSSet *displays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displays;
- (void)appendDescriptionToStream:(id)a0;
- (BOOL)specifiesDescriptor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithSourceDescriptors:(id)a0 descriptors:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)containsDescriptor:(id)a0;

@end
