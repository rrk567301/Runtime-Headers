@class NSString, NSImage, NSURL, NSData;

@interface ActiveWebPageShareItem : NSExtensionItem <SHKShareItem>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, retain) NSString *shareItemType;
@property (readonly, retain) NSURL *shareItemURL;
@property (readonly, retain) NSString *shareItemString;
@property (readonly, retain) NSImage *shareItemImage;
@property (readonly, retain) NSData *shareItemData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareItemOrURLForURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end
