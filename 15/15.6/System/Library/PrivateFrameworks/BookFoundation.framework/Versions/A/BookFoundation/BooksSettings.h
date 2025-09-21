@class NSString;

@interface BooksSettings : NSObject {
    void /* unknown type, empty encoding */ defaults;
}

@property (nonatomic) char menuOnLeft;
@property (nonatomic, readonly) NSString *filterBrightImagesKey;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;

@end
