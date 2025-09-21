@class NSArray;

@interface MPMusicPlayerControllerQueue : NSObject {
    NSArray *_items;
}

@property (readonly, copy, nonatomic) NSArray *items;

- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)fault;

@end
