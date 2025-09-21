@class LSBundleRecord;

@interface ISPersona : NSObject

@property (readonly, nonatomic) LSBundleRecord *record;
@property (readonly, nonatomic) long long personaType;

- (id)initWithRecord:(id)a0;
- (BOOL)isEnterprisePersona;
- (void).cxx_destruct;
- (id)resourceBadge;

@end
