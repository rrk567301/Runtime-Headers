@class NSString;

@interface BooksSettings : NSObject {
    void /* unknown type, empty encoding */ defaults;
}

@property (nonatomic) BOOL menuOnLeft;
@property (nonatomic, readonly) NSString *filterBrightImagesKey;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
