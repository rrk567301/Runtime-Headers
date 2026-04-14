@class NSString, NSMutableDictionary, NSObject;
@protocol MPActionableSupport;

@interface MPTransitionAction : MPAction

@property (copy, nonatomic) NSMutableDictionary *transitionAttributes;
@property (copy, nonatomic) NSString *transitionID;
@property (nonatomic) double transitionDuration;
@property (retain, nonatomic) NSObject<MPActionableSupport> *transitionDestination;

+ (BOOL)supportsSecureCoding;
+ (id)transitionAction;

- (void)setAction:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)configureTarget;
- (id)transitionAttributeForKey:(id)a0;

@end
