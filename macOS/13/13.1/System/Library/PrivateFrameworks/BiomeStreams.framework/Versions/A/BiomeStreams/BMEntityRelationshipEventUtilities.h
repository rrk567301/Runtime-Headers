@interface BMEntityRelationshipEventUtilities : NSObject

+ (BOOL)checkNullableStringEqualityForSource:(id)a0 target:(id)a1;
+ (BOOL)checkNullableArrayEqualityForSource:(id)a0 target:(id)a1;
+ (BOOL)checkNullableDictionaryEqualityForSource:(id)a0 target:(id)a1;
+ (BOOL)checkNullablePersonEntityEqualityForSource:(id)a0 target:(id)a1;
+ (BOOL)checkNullableTopicEntityEqualityForSource:(id)a0 target:(id)a1;

@end
