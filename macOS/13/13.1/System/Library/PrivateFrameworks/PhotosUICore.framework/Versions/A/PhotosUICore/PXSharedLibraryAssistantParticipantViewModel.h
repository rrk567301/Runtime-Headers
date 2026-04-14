@class NSImage, NSString;

@interface PXSharedLibraryAssistantParticipantViewModel : PXObservable

@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (id)init;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setImage:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)performChanges:(id /* block */)a0;

@end
