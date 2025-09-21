@class NSUUID;

@interface CXSetGroupCallAction : CXCallAction

@property (copy, nonatomic) NSUUID *callUUIDToGroupWith;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCallUUID:(id)a0 callUUIDToGroupWith:(id)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
