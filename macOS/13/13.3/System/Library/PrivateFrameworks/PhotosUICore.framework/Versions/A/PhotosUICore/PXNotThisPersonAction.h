@class PHPerson;
@protocol PXFastEnumeration;

@interface PXNotThisPersonAction : PXPhotosAction {
    id<PXFastEnumeration> _assets;
    id<PXFastEnumeration> _faces;
    BOOL _personWasVerified;
}

@property (readonly, nonatomic) PHPerson *person;
@property (nonatomic) BOOL didSetPersonAsVerified;
@property (readonly, nonatomic) id<PXFastEnumeration> faces;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)assets;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)analyticsEventName;
- (id)initWithPerson:(id)a0 assets:(id)a1;
- (id)initWithPerson:(id)a0 faces:(id)a1;

@end
