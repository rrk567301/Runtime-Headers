@class NSString;

@interface WKMenuDelegate : NSObject <NSMenuDelegate> {
    void *_menuProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)menuWillOpen:(id)a0;
- (void)menuDidClose:(id)a0;
- (id)initWithMenuProxy:(void *)a0;

@end
