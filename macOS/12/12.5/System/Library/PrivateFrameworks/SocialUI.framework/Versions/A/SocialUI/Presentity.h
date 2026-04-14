@class BuddyPicture;

@interface Presentity : IMHandle {
    BuddyPicture *_customPicture;
    BuddyPicture *_picture;
    BOOL _isCustomPictureChecked;
}

- (void).cxx_destruct;
- (void)setPicture:(id)a0;
- (id)picture;
- (void)sendNotificationABPersonChanged;
- (void)customPictureDataChanged:(id)a0 key:(id)a1;
- (void)_imPersonPictureChanged:(id)a0;
- (void)forgetCustomPicture;
- (void)_setPicture:(id)a0;
- (id)customPicture;
- (void)abPersonChangedPicture;
- (void)setPictureFromImage:(id)a0;

@end
