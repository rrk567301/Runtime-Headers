@class NSString, NSURL;

@interface SNFileCopyingResult : NSObject <SNResult> {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSURL *itemURL;

- (void).cxx_destruct;
- (id)init;

@end
