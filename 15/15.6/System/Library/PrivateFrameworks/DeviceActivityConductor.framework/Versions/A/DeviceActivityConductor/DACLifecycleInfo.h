@class DACChangeMarker, DACActivityDescriptor;

@interface DACLifecycleInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) DACChangeMarker *changeMarker;
@property (readonly, nonatomic) DACActivityDescriptor *activity;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) DACActivityDescriptor *origin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithActivity:(id)a0 state:(unsigned long long)a1 reason:(unsigned long long)a2 origin:(id)a3 changeMarker:(id)a4;

@end
