@class CHSIntentReference, NSString;

@interface CHSIntentRecommendation : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char _isSchemaSeparated;
@property (readonly, nonatomic) CHSIntentReference *intentReference;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)intent;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithIntentReference:(id)a0 localizedDescription:(id)a1;
- (id)_copyFillingInSchema:(id)a0;
- (id)_copyWithoutSchemaDataIfNecessary;

@end
