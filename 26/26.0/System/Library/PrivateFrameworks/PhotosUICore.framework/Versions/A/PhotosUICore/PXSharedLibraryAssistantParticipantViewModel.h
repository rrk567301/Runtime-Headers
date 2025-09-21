@class NSImage, NSString;

@interface PXSharedLibraryAssistantParticipantViewModel : PXObservable

@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (void)setImage:(id)a0;
- (void)setSubtitle:(id)a0;
- (id)init;
- (void)setTitle:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;

@end
