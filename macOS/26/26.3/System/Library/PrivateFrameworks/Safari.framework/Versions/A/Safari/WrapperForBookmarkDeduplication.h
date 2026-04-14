@class NSString, SafariWebBookmark;

@interface WrapperForBookmarkDeduplication : NSObject <NSCopying> {
    int _type;
    NSString *_title;
    NSString *_urlString;
}

@property (readonly, nonatomic) SafariWebBookmark *bookmark;
@property (readonly, nonatomic) BOOL hasSyncData;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBookmark:(id)a0;

@end
