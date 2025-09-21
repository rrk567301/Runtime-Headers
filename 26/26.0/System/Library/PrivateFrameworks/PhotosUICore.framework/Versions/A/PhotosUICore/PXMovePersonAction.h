@class NSArray, NSString, PXPhotoLibraryLocalDefaults, NSNumber;
@protocol PXFastEnumeration;

@interface PXMovePersonAction : PXPhotosAction

@property (readonly, nonatomic) NSArray *sourcePeople;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) id<PXFastEnumeration> destinationPeople;
@property (readonly, nonatomic) long long destinationManualOrder;
@property (readonly, nonatomic) long long destinationType;
@property (readonly, nonatomic) NSString *targetLocalIdentifier;
@property (copy, nonatomic) NSArray *modifiedDestinationPeople;
@property (readonly, nonatomic) id<PXFastEnumeration> otherPeople;
@property (copy, nonatomic) NSArray *modifiedOtherPeople;
@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults;
@property (retain, nonatomic) NSNumber *sourceSortingType;

- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (void)changeRequestForUndo:(id)a0 updateType:(BOOL)a1;
- (id)initWithSourcePeople:(id)a0 sourceType:(long long)a1 destinationPeople:(id)a2 destinationManualOrder:(long long)a3 destinationType:(long long)a4 targetLocalIdentifier:(id)a5 otherPeople:(id)a6;
- (id)localizedActionName;

@end
