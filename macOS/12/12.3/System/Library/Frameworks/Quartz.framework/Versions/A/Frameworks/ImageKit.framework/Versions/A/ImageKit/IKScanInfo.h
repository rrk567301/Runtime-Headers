@class NSURL, NSString;

@interface IKScanInfo : NSObject <NSCopying> {
    struct CGImage { } *_icon;
}

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long percentageComplete;
@property long long pageCount;
@property (nonatomic) BOOL scanDone;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isValid;
- (id)displayName;
- (id)userData;
- (struct CGImage { } *)icon;
- (BOOL)showButton;
- (id)initWithURL:(id)a0 name:(id)a1;
- (void)showInFinder:(id)a0;
- (id)pageInfo;
- (void)updateIconWithCompletion:(id /* block */)a0;
- (struct CGImage { } *)createPlaceHolder;

@end
