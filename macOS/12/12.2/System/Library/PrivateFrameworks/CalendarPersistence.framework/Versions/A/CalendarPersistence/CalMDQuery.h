@class NSSet;

@interface CalMDQuery : NSObject

@property struct __MDQuery { } *query;
@property (retain) NSSet *scope;

- (void)dealloc;

@end
