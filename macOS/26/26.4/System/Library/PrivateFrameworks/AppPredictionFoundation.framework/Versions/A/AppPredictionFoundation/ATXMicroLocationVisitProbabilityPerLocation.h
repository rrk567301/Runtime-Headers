@class NSString, NSNumber;

@interface ATXMicroLocationVisitProbabilityPerLocation : NSObject

@property (readonly, nonatomic) NSString *microLocationIdentifier;
@property (readonly, nonatomic) NSNumber *probability;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMicroLocationIdentifier:(id)a0 probability:(id)a1;
- (BOOL)isEqualToATXMicroLocationVisitProbabilityPerLocation:(id)a0;

@end
