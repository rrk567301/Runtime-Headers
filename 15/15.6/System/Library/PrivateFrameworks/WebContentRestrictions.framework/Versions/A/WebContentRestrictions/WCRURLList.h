@class NSMutableArray;

@interface WCRURLList : NSObject

@property (retain) NSMutableArray *urlStringList;

+ (id)_formattedStringFromURLString:(id)a0 fromBrowser:(char)a1 removePort:(char)a2;

- (id)init;
- (void).cxx_destruct;
- (void)addURLString:(id)a0;
- (char)containsURLString:(id)a0;

@end
