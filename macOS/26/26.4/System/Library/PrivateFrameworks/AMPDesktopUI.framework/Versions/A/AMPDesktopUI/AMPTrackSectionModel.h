@class NSArray, NSString;

@interface AMPTrackSectionModel : NSObject {
    void /* function */ playlistItems;
    void /* function */ title;
}

@property (nonatomic, copy) NSArray *playlistItems;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 items:(id)a1;

@end
