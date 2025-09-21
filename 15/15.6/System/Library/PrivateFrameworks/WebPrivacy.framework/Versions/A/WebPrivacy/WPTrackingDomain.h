@class NSString;

@interface WPTrackingDomain : NSObject

@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *owner;
@property (readonly, nonatomic) char canBlock;

- (void).cxx_destruct;
- (id)initWithHost:(id)a0 owner:(id)a1 canBlock:(char)a2;

@end
