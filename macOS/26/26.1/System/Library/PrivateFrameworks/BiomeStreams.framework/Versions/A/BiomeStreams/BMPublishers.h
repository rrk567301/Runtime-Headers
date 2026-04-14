@class NSArray;

@interface BMPublishers : NSObject

@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (id)merge;
- (void).cxx_destruct;
- (id)initWithPublishers:(id)a0;
- (id)init;

@end
