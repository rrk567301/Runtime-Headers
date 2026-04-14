@class PKAutoFillCardDescriptor;

@interface PKFPANCardCanSaveResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKAutoFillCardDescriptor *matchedCard;
@property (readonly, nonatomic) unsigned long long savableFields;
@property (readonly, nonatomic) unsigned long long updatableFields;

+ (id)empty;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSavableFields:(unsigned long long)a0 updatableFields:(unsigned long long)a1;

@end
