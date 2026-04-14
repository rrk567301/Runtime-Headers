@class NSString, SafariWebBookmark;

@interface WrapperForBookmarkDeduplication : NSObject <NSCopying> {
    int _type;
    NSString *_title;
    NSString *_urlString;
}

@property (readonly, nonatomic) SafariWebBookmark *bookmark;
@property (readonly, nonatomic) BOOL hasSyncData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBookmark:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
