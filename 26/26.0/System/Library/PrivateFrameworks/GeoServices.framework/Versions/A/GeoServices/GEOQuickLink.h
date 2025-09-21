@class NSString;

@interface GEOQuickLink : NSObject {
    NSString *_title;
    NSString *_urlString;
    NSString *_bundleID;
    NSString *_appAdamID;
    NSString *_imageName;
    long long _type;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) NSString *appAdamID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)initForAppClipWithTitle:(id)a0 urlString:(id)a1 bundleID:(id)a2;
- (id)initWithQuickLink:(id)a0;
- (id)initWithTitle:(id)a0 urlString:(id)a1 bundleID:(id)a2 appAdamID:(id)a3 imageName:(id)a4 type:(long long)a5;

@end
