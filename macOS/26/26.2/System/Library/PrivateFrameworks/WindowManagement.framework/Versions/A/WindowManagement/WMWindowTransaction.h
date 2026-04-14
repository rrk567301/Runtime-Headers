@class NSArray, NSMutableArray;

@interface WMWindowTransaction : NSObject {
    NSMutableArray *_actions;
}

@property (readonly, nonatomic) NSArray *actions;

- (void)addAction:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
