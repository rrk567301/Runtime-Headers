@class NSArray, NSDate;

@interface VideosUI.VUIFavoritesState : NSObject {
    void /* function */ favorites;
    void /* unknown type, empty encoding */ lastModifiedDate;
}

@property (nonatomic, readonly) NSArray *favorites;
@property (nonatomic, readonly) NSDate *lastModifiedDate;

- (id)init;
- (void).cxx_destruct;

@end
