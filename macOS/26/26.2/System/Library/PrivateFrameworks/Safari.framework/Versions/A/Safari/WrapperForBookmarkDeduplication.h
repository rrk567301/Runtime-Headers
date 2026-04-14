@class NSString, SafariWebBookmark;

@interface WrapperForBookmarkDeduplication : NSObject <NSCopying> {
    int _type;
    NSString *_title;
    NSString *_urlString;
}

@property (readonly, nonatomic) SafariWebBookmark *bookmark;
@property (readonly, nonatomic) BOOL hasSyncData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBookmark:(id)a0;
- (id)init;

@end
