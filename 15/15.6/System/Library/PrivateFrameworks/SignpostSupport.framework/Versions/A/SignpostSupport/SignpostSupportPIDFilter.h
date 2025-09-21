@class NSSet, NSPredicate;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer>

@property (readonly, nonatomic) unsigned long long _compoundPredicateType;
@property (readonly, nonatomic) char _wantsNotEqual;
@property (readonly, nonatomic) NSSet *pidSet;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;

- (id)init;
- (void).cxx_destruct;
- (char)_wantsNotSubsystem;
- (void)addPIDNumber:(id)a0;
- (void)addPIDNumberSet:(id)a0;
- (char)passesPIDNumber:(id)a0;

@end
