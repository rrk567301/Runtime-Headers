@class NSArray;

@interface BMSharedPublishers : NSObject

@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (id)merge;
- (id)initWithPublishers:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
