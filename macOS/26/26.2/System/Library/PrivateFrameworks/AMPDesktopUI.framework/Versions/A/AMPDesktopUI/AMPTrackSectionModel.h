@class NSArray, NSString;

@interface AMPTrackSectionModel : NSObject {
    void /* function */ playlistItems;
    void /* function */ title;
}

@property (nonatomic, copy) NSArray *playlistItems;
@property (nonatomic, copy) NSString *title;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 items:(id)a1;

@end
