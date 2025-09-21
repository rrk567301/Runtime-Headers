@class NSArray, NSString, NSData;

@interface CHSIntentRecommendationsContainer : NSObject <NSSecureCoding, BSXPCSecureCoding, NSCopying> {
    NSData *_schemaData;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char _didAdjustRecommendationCount;
@property (readonly, nonatomic) NSArray *recommendations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithSchemaIntent:(id)a0 recommendations:(id)a1;
- (id)_initWithSchemaData:(id)a0 recommendations:(id)a1;
- (id)_recommendationsWithoutSchemaData;

@end
