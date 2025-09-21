@class NSArray, NSMutableArray;

@interface WMWindowTransaction : NSObject {
    NSMutableArray *_actions;
}

@property (readonly, nonatomic) NSArray *actions;

- (void)addAction:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
