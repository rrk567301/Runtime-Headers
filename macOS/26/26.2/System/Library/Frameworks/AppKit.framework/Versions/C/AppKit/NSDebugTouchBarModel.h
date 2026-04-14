@class NSString, NSTouchBar, NSMutableArray;

@interface NSDebugTouchBarModel : NSObject

@property void *address;
@property (copy) NSString *className;
@property (copy) NSString *responderDescription;
@property (retain) NSTouchBar *touchBar;
@property (readonly) NSString *prettyDescription;
@property (readonly) NSMutableArray *warnings;
@property BOOL isSuppressed;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (void)addWarning:(id)a0;

@end
