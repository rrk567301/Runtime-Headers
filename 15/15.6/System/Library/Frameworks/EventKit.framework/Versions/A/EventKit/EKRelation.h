@class NSSet, NSString;

@interface EKRelation : NSObject {
    NSString *_entityName;
    char _toMany;
    char _ownsRelated;
    NSSet *_inversePropertyNames;
}

@property (readonly, nonatomic) char toMany;
@property (readonly, nonatomic) NSSet *inversePropertyNames;
@property (readonly, nonatomic) char ownsRelatedObject;
@property (copy, nonatomic) id /* block */ inversePropertyIsApplicable;

+ (id)relationWithEntityName:(id)a0 toMany:(char)a1 inversePropertyNames:(id)a2 ownsRelated:(char)a3;
+ (id)relationWithEntityName:(id)a0 toMany:(char)a1 inversePropertyNames:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithEntityName:(id)a0 toMany:(char)a1 inversePropertyNames:(id)a2 ownsRelated:(char)a3;
- (char)shouldSetInverseProperty:(id)a0 onObject:(id)a1 forObject:(id)a2;

@end
