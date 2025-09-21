@class NSArray, NSString, NSDate, PXSharedAlbumsActivityEntryAvatarConfiguration;

@interface PXSharedAlbumsActivityEntryItem : NSObject {
    void /* unknown type, empty encoding */ avatarInfos;
    void /* unknown type, empty encoding */ activityEntry;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ displayUseCase;
    void /* unknown type, empty encoding */ date;
    void /* function */ contributorDisplayNames;
    void /* function */ albumName;
    void /* function */ albumId;
    void /* function */ message;
    void /* function */ relatedCommentUUID;
    void /* unknown type, empty encoding */ assetsForPreviews;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) BOOL isFromMe;
@property (nonatomic, readonly) NSArray *contributorDisplayNames;
@property (nonatomic, readonly) NSString *albumName;
@property (nonatomic, readonly) NSString *albumId;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) BOOL isPlaceholder;
@property (nonatomic, readonly) NSString *relatedCommentUUID;
@property (nonatomic, readonly) NSString *contributorDisplayName;
@property (nonatomic, readonly) PXSharedAlbumsActivityEntryAvatarConfiguration *avatarInfo;

- (id)init;
- (id)assets;
- (void).cxx_destruct;

@end
