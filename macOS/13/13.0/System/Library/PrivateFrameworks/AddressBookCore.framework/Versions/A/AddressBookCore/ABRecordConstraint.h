@class NSArray;

@interface ABRecordConstraint : NSObject {
    NSArray *mValidProperties;
}

@property Class mConstraintClass;

- (void)dealloc;
- (id)initialLabelsForProperty:(id)a0;
- (id)initialProperties;
- (id)initWithRecordClass:(Class)a0;
- (BOOL)isValidProperty:(id)a0;
- (id)validProperties;
- (BOOL)isReadOnlyRecord:(id)a0;
- (id)availablePropertiesForPerson:(id)a0 delegate:(id)a1;
- (id)availablePropertiesForContact:(id)a0 delegate:(id)a1;
- (id)validLabelsForProperty:(id)a0;
- (id)availableLabelsForProperty:(id)a0 person:(id)a1 delegate:(id)a2;
- (id)availableLabelsForProperty:(id)a0 contact:(id)a1 delegate:(id)a2;
- (id)genericRepresentationOfLabel:(id)a0 forProperty:(id)a1;

@end
