@class CNContactStore, _MKUserLocationView, CNAvatarImageRenderer, NSObject;
@protocol OS_dispatch_queue;

@interface _MKUserLocationViewImageProvider : NSObject {
    _MKUserLocationView *_view;
    NSObject<OS_dispatch_queue> *_queue;
    CNContactStore *_contactStore;
    CNAvatarImageRenderer *_monogrammer;
}

- (id)init;
- (void).cxx_destruct;
- (id)_monogrammer;
- (id)initWithUserLocationView:(id)a0;
- (void)_updateImage;
- (void)_updateContactImage;
- (void)_updateDefaultImage;
- (void)_contactsChanged:(id)a0;

@end
