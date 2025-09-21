@class NSSet;

@interface HMIAnalysisStateUpdate : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSSet *torsoAnnotations;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)stateUpdateByMergingStateUpdate:(id)a0;
- (id)initWithTorsoAnnotations:(id)a0;
- (id)initWithTorsoAnnotationsArray:(id)a0;

@end
