@class NSString, TRIAppContainer;

@interface TRITreatmentContentDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) TRIAppContainer *container;

+ (id)descriptorWithTreatmentId:(id)a0 container:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (BOOL)isEqualToDescriptor:(id)a0;
- (id)initWithTreatmentId:(id)a0 container:(id)a1;
- (id)copyWithReplacementContainer:(id)a0;

@end
