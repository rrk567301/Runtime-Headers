@class NSArray;

@interface SNFileListingResult : NSObject <SNResult> {
    void /* function */ fileItems;
}

@property (nonatomic, readonly) NSArray *fileItems;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileItems:(id)a0;

@end
