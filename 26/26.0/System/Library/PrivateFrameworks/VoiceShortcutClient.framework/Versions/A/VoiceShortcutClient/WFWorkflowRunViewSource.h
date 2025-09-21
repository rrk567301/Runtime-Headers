@class NSUUID;

@interface WFWorkflowRunViewSource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long renderID;
@property (nonatomic) unsigned int contextID;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
