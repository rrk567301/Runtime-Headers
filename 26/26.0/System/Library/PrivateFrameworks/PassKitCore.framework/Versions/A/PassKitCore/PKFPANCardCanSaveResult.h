@class PKAutoFillCardDescriptor;

@interface PKFPANCardCanSaveResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKAutoFillCardDescriptor *matchedCard;
@property (readonly, nonatomic) unsigned long long savableFields;
@property (readonly, nonatomic) unsigned long long updatableFields;

+ (id)empty;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSavableFields:(unsigned long long)a0 updatableFields:(unsigned long long)a1;

@end
