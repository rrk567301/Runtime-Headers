@class NSArray, NSMutableDictionary, PXDataSection, PXDataSectionManager, NSString;
@protocol PXDataSectionArrayControllerDelegate;

@interface PXDataSectionArrayController : NSObject <PXDataSectionManagerChangeObserver>

@property (readonly, nonatomic) PXDataSectionManager *dataSectionManager;
@property (readonly, nonatomic) PXDataSection *currentDataSection;
@property (readonly, nonatomic) Class transformerClass;
@property (readonly, nonatomic) NSArray *transformedObjectsWithUpdatedAuxiliaryObjects;
@property (readonly, nonatomic) NSMutableDictionary *transformedObjectsByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *auxiliaryObjectsByIdentifier;
@property (readonly, nonatomic) NSArray *transformedObjects;
@property (weak, nonatomic) id<PXDataSectionArrayControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)startBackgroundFetchingIfNeeded;
- (id)_associatedObjectForTransformedObject:(id)a0;
- (void)_updateTransformedObjects;
- (id)auxiliaryObjectForTransformedObject:(id)a0 key:(id)a1;
- (id)dataSectionObjectForTransformedObject:(id)a0;
- (id)dataSectionObjectsWithIdentifiers:(id)a0;
- (id)initWithDataSectionManager:(id)a0 transformerClass:(Class)a1;

@end
