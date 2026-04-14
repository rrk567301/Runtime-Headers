@class NSString;

@interface PXPeopleResetUserFeedbackAction : PXPhotosAction {
    void /* unknown type, empty encoding */ person;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *localizedActionName;

- (id)initWithPhotoLibrary:(id)a0;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (void)performUndo:(id /* block */)a0;

@end
