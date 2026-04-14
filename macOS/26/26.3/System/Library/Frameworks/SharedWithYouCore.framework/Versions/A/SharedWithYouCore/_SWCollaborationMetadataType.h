@class NSString;

@interface _SWCollaborationMetadataType : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, copy, nonatomic) _SWCollaborationMetadataType *collaboration;
@property (class, readonly, copy, nonatomic) _SWCollaborationMetadataType *event;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *typedIdentifier;
@property (retain, nonatomic) NSString *actionDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTypedIdentifier:(id)a0 actionDescription:(id)a1;
- (BOOL)isEqualToCollaborationMetadataType:(id)a0;

@end
