@class NSUUID;

@interface WFWorkflowRunViewSource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long renderID;
@property (nonatomic) unsigned int contextID;
@property (readonly, nonatomic, getter=isInvalidated) char invalidated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
