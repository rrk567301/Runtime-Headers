@class NSUUID;

@interface CXSetGroupCallAction : CXCallAction

@property (copy, nonatomic) NSUUID *callUUIDToGroupWith;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithCallUUID:(id)a0 callUUIDToGroupWith:(id)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
