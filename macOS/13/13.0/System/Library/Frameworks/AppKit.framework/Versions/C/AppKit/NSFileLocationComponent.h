@class NSNumber, NSURL, BRCloudPathComponentDisplayMetadata, NSAttributedString;

@interface NSFileLocationComponent : NSObject {
    NSURL *_url;
    NSFileLocationComponent *_containerComponent;
    NSAttributedString *_iconAsAttributedString;
    NSNumber *_isUbiquityContainer;
    BRCloudPathComponentDisplayMetadata *_iCloudMetadata;
}

+ (void)flushCaches;
+ (id)leafFileLocationComponentWithURL:(id)a0;
+ (id)attributedStringForIcon:(id)a0;

- (void)dealloc;
- (id)name;
- (id)url;
- (id)_initWithURL:(id)a0;
- (id)presentableName;
- (id)containerComponent;
- (id)iconAsAttributedString;
- (BOOL)_isUbiquityContainer;
- (id)_cloudMetadata;

@end
