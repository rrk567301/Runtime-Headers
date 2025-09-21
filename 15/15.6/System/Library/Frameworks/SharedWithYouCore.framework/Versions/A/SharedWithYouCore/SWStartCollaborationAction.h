@class SWCollaborationMetadata;

@interface SWStartCollaborationAction : SWAction <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SWCollaborationMetadata *collaborationMetadata;

+ (id)actionWithMetadata:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMetadata:(id)a0;
- (char)isEqualToAction:(id)a0;
- (void)fulfillUsingURL:(id)a0 collaborationIdentifier:(id)a1;
- (void)fulfillUsingURL:(id)a0 updatedMetadata:(id)a1;

@end
