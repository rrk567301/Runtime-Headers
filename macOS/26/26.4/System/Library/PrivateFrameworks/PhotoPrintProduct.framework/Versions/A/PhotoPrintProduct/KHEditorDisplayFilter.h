@class NSString, NSDictionary;

@interface KHEditorDisplayFilter : NSObject

@property (readonly, copy) NSString *localizedTitle;
@property (retain) NSDictionary *userInfo;
@property BOOL isDefault;
@property long long tag;
@property (copy) NSString *accessibilityHelp;

+ (id)filterWithTitle:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0;

@end
