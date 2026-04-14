@class NSString;

@interface NSDebugResponderChainItem : NSObject

@property void *address;
@property (copy) NSString *className;
@property (copy) NSString *responderDescription;
@property (readonly) NSString *prettyDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
