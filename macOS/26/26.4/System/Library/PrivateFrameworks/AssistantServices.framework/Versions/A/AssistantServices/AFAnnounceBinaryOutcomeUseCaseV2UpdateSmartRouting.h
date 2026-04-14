@class NSString;

@interface AFAnnounceBinaryOutcomeUseCaseV2UpdateSmartRouting : NSObject <NSCopying, NSSecureCoding, AFAnnounceBinaryOutcomeUseCaseV2>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *outputDeviceName;
@property (readonly, copy, nonatomic) NSString *sourceDeviceName;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithOutputDeviceName:(id)a0 sourceDeviceName:(id)a1;

@end
