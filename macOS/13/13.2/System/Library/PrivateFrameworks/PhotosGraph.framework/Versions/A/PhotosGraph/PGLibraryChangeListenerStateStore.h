@class PHPersistentChangeToken, NSURL;

@interface PGLibraryChangeListenerStateStore : NSObject {
    NSURL *_changeTokenURL;
}

@property (readonly, nonatomic) PHPersistentChangeToken *changeToken;

- (void).cxx_destruct;
- (id)changeToken;
- (id)initWithPhotoLibrary:(id)a0;
- (void)setChangeToken:(id)a0;

@end
