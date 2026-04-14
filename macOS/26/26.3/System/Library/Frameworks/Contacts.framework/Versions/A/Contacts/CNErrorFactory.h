@interface CNErrorFactory : NSObject

+ (id)errorByAddingUserInfoEntries:(id)a0 toError:(id)a1;
+ (id)_localizedReasonForCode:(long long)a0;
+ (id)errorObject:(id)a0 doesNotImplementSelector:(SEL)a1;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithCode:(long long)a0;
+ (id)validationErrorByAggregatingValidationErrors:(id)a0;
+ (id)errorByPrependingKeyPath:(id)a0 toKeyPathsInError:(id)a1;
+ (id)_localizedDescriptionForCode:(long long)a0;

@end
