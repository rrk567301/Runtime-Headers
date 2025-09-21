@class NSURL, NSData, NSDictionary;
@protocol FileTransferIconLoaderDelegate;

@interface FileTransferIconLoaderOperation : NSOperation {
    NSDictionary *_options;
}

@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *bookmark;
@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (weak, nonatomic) id<FileTransferIconLoaderDelegate> delegate;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (void)_notifyDelegate:(id)a0;

@end
