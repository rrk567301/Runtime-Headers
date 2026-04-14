@class NSArray, NSSet, NSMutableArray;

@interface _WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject {
    NSMutableArray *_thumbnailImages;
    NSMutableArray *_backgroundColors;
}

@property (copy, nonatomic) NSArray *subrequests;
@property (copy, nonatomic) NSSet *subrequestTokens;
@property (readonly, copy, nonatomic) NSArray *thumbnailImages;
@property (readonly, copy, nonatomic) NSArray *backgroundColors;
@property (nonatomic) BOOL hasScheduledCoalescedUpdate;

- (void).cxx_destruct;
- (id)init;
- (void)setBackgroundColor:(id)a0 atIndex:(unsigned long long)a1;
- (void)setThumbnailImage:(id)a0 atIndex:(unsigned long long)a1;

@end
