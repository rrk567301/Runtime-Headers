@class NSArray;

@interface HMDEventCounter : NSObject

@property unsigned long long count;
@property (retain) NSArray *observers;

- (id)initWithCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
