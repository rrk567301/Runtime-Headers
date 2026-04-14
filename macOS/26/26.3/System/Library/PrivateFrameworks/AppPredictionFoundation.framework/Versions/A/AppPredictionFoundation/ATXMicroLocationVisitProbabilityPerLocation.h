@class NSString, NSNumber;

@interface ATXMicroLocationVisitProbabilityPerLocation : NSObject

@property (readonly, nonatomic) NSString *microLocationIdentifier;
@property (readonly, nonatomic) NSNumber *probability;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMicroLocationIdentifier:(id)a0 probability:(id)a1;
- (BOOL)isEqualToATXMicroLocationVisitProbabilityPerLocation:(id)a0;

@end
