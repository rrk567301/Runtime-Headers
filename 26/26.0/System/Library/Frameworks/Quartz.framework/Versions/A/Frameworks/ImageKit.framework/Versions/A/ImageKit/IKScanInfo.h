@class NSURL, NSString;

@interface IKScanInfo : NSObject <NSCopying> {
    struct CGImage { } *_icon;
}

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long percentageComplete;
@property long long pageCount;
@property (nonatomic) BOOL scanDone;

- (BOOL)isValid;
- (id)userData;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)displayName;
- (BOOL)showButton;
- (struct CGImage { } *)createPlaceHolder;
- (id)initWithURL:(id)a0 name:(id)a1;
- (id)pageInfo;
- (void)showInFinder:(id)a0;

@end
