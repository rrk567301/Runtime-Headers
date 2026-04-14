@class ICCameraFile, NSFilePromiseProvider;

@interface IKPlaceholderItem : NSObject

@property (retain, nonatomic) ICCameraFile *cameraItem;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSFilePromiseProvider *promise;
@property (nonatomic) unsigned long long objectID;

- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (id)initWithCameraItem:(id)a0 selected:(BOOL)a1;

@end
