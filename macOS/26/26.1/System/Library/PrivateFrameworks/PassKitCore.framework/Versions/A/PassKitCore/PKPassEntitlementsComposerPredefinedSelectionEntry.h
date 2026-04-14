@class PKPredefinedSharedEntitlementSelection, NSArray, NSString, PKPassEntitlementsComposer;
@protocol NSCopying;

@interface PKPassEntitlementsComposerPredefinedSelectionEntry : NSObject <PKIdentifiable> {
    PKPassEntitlementsComposer *_parentEntitlementComposer;
}

@property (retain, nonatomic) PKPredefinedSharedEntitlementSelection *predefinedSelection;
@property (retain, nonatomic) NSArray *entries;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
