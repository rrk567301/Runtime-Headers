@class NSString, TRIAppContainer;

@interface TRITreatmentContentDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) TRIAppContainer *container;

+ (id)descriptorWithTreatmentId:(id)a0 container:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (BOOL)isEqualToDescriptor:(id)a0;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementContainer:(id)a0;
- (id)initWithTreatmentId:(id)a0 container:(id)a1;

@end
