@class CHSIntentReference, NSString;

@interface CHSIntentRecommendation : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _isSchemaSeparated;
@property (readonly, nonatomic) CHSIntentReference *intentReference;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)intent;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)_copyWithoutSchemaDataIfNecessary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIntentReference:(id)a0 localizedDescription:(id)a1;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_copyFillingInSchema:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
