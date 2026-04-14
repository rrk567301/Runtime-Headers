@class NSArray;

@interface SNFileListingResult : NSObject <SNResult> {
    void /* function */ fileItems;
}

@property (nonatomic, readonly) NSArray *fileItems;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFileItems:(id)a0;

@end
