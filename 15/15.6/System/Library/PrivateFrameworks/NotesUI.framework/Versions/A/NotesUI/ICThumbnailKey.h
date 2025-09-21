@class NSString, NSURL;

@interface ICThumbnailKey : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ accountId;
    void /* unknown type, empty encoding */ objectId;
    void /* unknown type, empty encoding */ thumbnailId;
}

@property (class, nonatomic, readonly) NSString *recentObjectId;

@property (nonatomic, readonly) NSString *accountId;
@property (nonatomic, readonly) NSString *objectId;
@property (nonatomic, readonly) NSString *thumbnailId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSURL *containerUrl;
@property (nonatomic, readonly) NSURL *descriptionUrl;
@property (nonatomic, readonly) NSURL *imageUrl;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 accountId:(id)a1 objectId:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 scale:(double)a4 appearance:(unsigned long long)a5;
- (id)initWithAccountId:(id)a0 objectId:(id)a1;
- (id)initWithAccountId:(id)a0 objectId:(id)a1 thumbnailId:(id)a2;
- (id)initWithType:(long long)a0 accountId:(id)a1 objectId:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 scale:(double)a4 appearance:(unsigned long long)a5 isRTL:(char)a6 contentSizeCategory:(id)a7 hasBoldText:(char)a8 hasButtonShapes:(char)a9 hasDarkerSystemColors:(char)a10 hasBorder:(char)a11;

@end
