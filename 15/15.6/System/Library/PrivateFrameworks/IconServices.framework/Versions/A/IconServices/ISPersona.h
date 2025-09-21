@class LSBundleRecord;

@interface ISPersona : NSObject

@property (readonly, nonatomic) LSBundleRecord *record;
@property (readonly, nonatomic) long long personaType;

- (void).cxx_destruct;
- (char)isEnterprisePersona;
- (id)initWithRecord:(id)a0;
- (id)resourceBadge;

@end
