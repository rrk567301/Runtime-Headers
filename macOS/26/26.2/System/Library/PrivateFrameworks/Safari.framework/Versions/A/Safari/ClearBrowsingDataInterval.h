@class NSString;

@interface ClearBrowsingDataInterval : NSObject

@property (readonly) NSString *descriptionOfInterval;
@property (readonly) NSString *identifier;
@property (copy, nonatomic) id /* block */ dateAfterWhichDataShouldBeClearedBlock;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDescription:(id)a0 identifier:(id)a1 dateAfterWhichDataShouldBeClearedBlock:(id /* block */)a2;

@end
