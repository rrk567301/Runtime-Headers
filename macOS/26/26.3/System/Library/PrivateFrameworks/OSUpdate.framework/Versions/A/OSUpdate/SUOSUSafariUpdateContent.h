@class NSString, NSNumber, NSArray;

@interface SUOSUSafariUpdateContent : NSObject

@property (readonly) NSString *updateName;
@property (readonly) NSString *updateTitle;
@property (readonly) NSNumber *compatibilityVersion;
@property (readonly) NSString *updateVersion;
@property (readonly) NSString *title;
@property (readonly) NSString *body;
@property (readonly) NSArray *items;

+ (id)_getNSImageFromBundle:(id)a0 withKeys:(id)a1;
+ (id)_getDictionaryFromPlist:(id)a0 error:(id *)a1;
+ (id)_getItemsFromBundle:(id)a0 withKeys:(id)a1;
+ (id)_getTitleAndBodyFromBundle:(id)a0 withKeys:(id)a1;
+ (id)safariUpdateContentWithProduct:(id)a0 bundleURL:(id)a1 error:(id *)a2;
+ (id)safariUpdateContentWithProduct:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithUpdateName:(id)a0 updateTitle:(id)a1 updateVersion:(id)a2 compatibilityVersion:(id)a3 title:(id)a4 body:(id)a5 items:(id)a6;

@end
