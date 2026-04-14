@class NSArray, NSDate;

@interface VideosUI.VUIFavoritesState : NSObject {
    void /* function */ favorites;
    void /* unknown type, empty encoding */ lastModifiedDate;
}

@property (nonatomic, readonly) NSArray *favorites;
@property (nonatomic, readonly) NSDate *lastModifiedDate;

- (void).cxx_destruct;
- (id)init;

@end
