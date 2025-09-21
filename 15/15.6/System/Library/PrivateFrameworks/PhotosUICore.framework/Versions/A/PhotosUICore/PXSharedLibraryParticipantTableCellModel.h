@class NSImage, NSString;

@interface PXSharedLibraryParticipantTableCellModel : PXObservable

@property (class, readonly) double imageDiameter;
@property (class, readonly) double imageVerticalInset;

@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, nonatomic) long long requestID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) char removeButtonVisible;
@property (readonly, nonatomic) char ellipsisButtonAllowed;

+ (double)imageInset;

- (id)init;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setImage:(id)a0;
- (void)setAddress:(id)a0;
- (void)setRequestID:(long long)a0;
- (void)configureForParticipant:(id)a0 displayScale:(double)a1 isRTL:(char)a2;
- (void)setEllipsisButtonAllowed:(char)a0;

@end
