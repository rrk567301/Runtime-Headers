@class NSString;

@interface TCSmartActionMetadataActionWithStringRepresentation : NSObject <TCSmartActionMetadata>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *actionType;
@property (readonly, copy, nonatomic) NSString *actionText;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresFollowUp;
- (id)extractFinalResult:(id *)a0;
- (id)initWithActionText:(id)a0 stringRepresentation:(id)a1;

@end
