@class NSString;

@interface AFSystemStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long sleepState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithSerializedBackingStore:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)serializedBackingStore;
- (id)ad_shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)buildDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSleepState:(long long)a0;

@end
