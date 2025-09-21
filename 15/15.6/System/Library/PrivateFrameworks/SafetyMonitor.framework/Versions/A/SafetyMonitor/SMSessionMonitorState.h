@class NSUUID, NSDate;

@interface SMSessionMonitorState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) unsigned long long currentRegionState;
@property (readonly, nonatomic) NSDate *date;
@property (nonatomic) char triggerPending;
@property (nonatomic) char triggerConfirmed;
@property (nonatomic) char dirty;

+ (id)regionStateToString:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 currentRegionState:(unsigned long long)a1 triggerPending:(char)a2 triggerConfirmed:(char)a3 date:(id)a4;
- (void)markDirty;

@end
