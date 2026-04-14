@interface VideosUI.JSSignpost : VUIJSObject <VideosUI.JSSignpostInterface>

- (id)init;
- (id)initWithAppContext:(id)a0;
- (void)markSignpostBegin:(id)a0;
- (void)markSignpostBeginWithParam:(id)a0 :(id)a1;
- (void)markSignpostEnd:(id)a0;

@end
