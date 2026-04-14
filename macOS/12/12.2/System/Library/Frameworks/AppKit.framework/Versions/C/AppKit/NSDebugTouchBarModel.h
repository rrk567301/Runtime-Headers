@class NSString, NSTouchBar, NSMutableArray;

@interface NSDebugTouchBarModel : NSObject

@property void *address;
@property (copy) NSString *className;
@property (copy) NSString *responderDescription;
@property (retain) NSTouchBar *touchBar;
@property (readonly) NSString *prettyDescription;
@property (readonly) NSMutableArray *warnings;
@property BOOL isSuppressed;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)addWarning:(id)a0;

@end
