@class NSString, NSMutableArray, NSObject;
@protocol NSUserInterfaceItemSearching;

@interface SCTResults : NSObject

@property (retain) NSString *identifier;
@property unsigned long long sequenceNumber;
@property (retain) NSMutableArray *values;
@property (retain) NSObject<NSUserInterfaceItemSearching> *handler;

- (id)description;
- (void)dealloc;

@end
