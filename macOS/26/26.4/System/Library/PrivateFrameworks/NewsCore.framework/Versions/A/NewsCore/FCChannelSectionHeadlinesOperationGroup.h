@class NSArray;
@protocol FCSectionProviding;

@interface FCChannelSectionHeadlinesOperationGroup : NSObject

@property (retain, nonatomic) id<FCSectionProviding> section;
@property (retain, nonatomic) NSArray *headlines;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithSection:(id)a0 headlines:(id)a1;

@end
