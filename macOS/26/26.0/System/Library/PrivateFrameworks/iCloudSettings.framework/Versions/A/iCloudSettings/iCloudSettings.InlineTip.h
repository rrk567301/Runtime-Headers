@class NSString, NSURL, NSArray;

@interface iCloudSettings.InlineTip : NSObject {
    void /* function */ title;
    void /* function */ subtitle;
    void /* unknown type, empty encoding */ iconURL;
    void /* function */ actions;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSURL *iconURL;
@property (nonatomic, readonly) NSArray *actions;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
