@class NSString, SafariWebBookmark;

@interface WrapperForBookmarkDeduplication : NSObject <NSCopying> {
    int _type;
    NSString *_title;
    NSString *_urlString;
}

@property (readonly, nonatomic) SafariWebBookmark *bookmark;
@property (readonly, nonatomic) BOOL hasSyncData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithBookmark:(id)a0;

@end
