@class NSArray;

@interface BMPublishers : NSObject

@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (id)initWithPublishers:(id)a0;
- (id)init;
- (id)merge;
- (void).cxx_destruct;

@end
