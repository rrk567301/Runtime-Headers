@class NSCountedSet, NSDictionary;

@interface _DASHistogram : NSObject

@property (readonly, copy, nonatomic) NSCountedSet *counts;
@property (readonly, copy, nonatomic) NSDictionary *countsDictionary;

- (id)initWithEvents:(id)a0;
- (void).cxx_destruct;

@end
